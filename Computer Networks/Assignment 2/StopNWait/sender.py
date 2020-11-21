
import multiprocessing
import random
import time
import threading
import sys
sys.path.append('../package')
import helper
import const
from packet import *


class Sender:
    def __init__(self, name, fileName, senderToChannel, channelToSender): #, channelEvent): # last two needs to be shared queue
        self.name               = name
        self.fileName           = fileName
        self.packetType         = {'data' : 0, 'ack' : 1}
        self.dest               = self.selectReceiver()
        self.seqNo              = 0
        self.senderToChannel    = senderToChannel
        self.channelToSender    = channelToSender
        #self.channelEvent       = channelEvent
        self.timeoutEvent       = threading.Event()
        self.endTransmitting    = False
        self.receivedAck        = False # true if ack received and verified as valid
        #self.recentPacket exists

    def selectReceiver(self):
        #return random.randint(0, const.totalReceiverNumber-1)
        return 0 # for testing with 1 sender

    def openFile(self, filename):
        try:
            file = open(filename, 'r')
        except IOError:
            sys.exit("No file exit with name {} !".format(filename))
        
        return file

    def resendCurrentPacket(self):
        self.channelToSender.send(self.recentPacket)

    def putDataInPipe(self):

        time.sleep(0.2)
        print("***********************************")
        print("Sender{} starts sending data to Receiver{}".format(self.name+1, self.dest+1))
        print("***********************************\n\n")
        file = self.openFile(self.fileName)

        byte = file.read(const.defaultDataPacketSize)
        self.seqNo = 0
        pktCount = 0
        totalPktCount = 0
        while byte:
            packet = Packet(self.packetType['data'], self.seqNo, byte, self.name, self.dest).makePacket()
            self.recentPacket = packet
            self.channelToSender.send(packet)
            pktCount == 1
            totalPktCount += 1
            print("(Sender{}:) Packet {} has been sent!".format(self.name+1, pktCount))
            while not self.receivedAck: # timeout does happen
                #resend needed
                self.timeoutEvent.wait(const.senderTimeout)# if timeout resend
                time.sleep(0.2)
                if not self.receivedAck: 
                    self.resendCurrentPacket()
                    totalPktCount += 1
                    print("(Sender{}:) Packet {} has been resending!".format(self.name+1,pktCount))
                else: break
            self.timeoutEvent.clear()

            self.seqNo = (self.seqNo+1)%2
            byte = file.read(const.defaultDataPacketSize)
        
        self.endTransmitting = True
        file.close()

        print("\n*****************(Sender{}:)STATS******************".format(self.name+1))
        print("Total packets: {}\n Total Packets send {}".format(pktCount, totalPktCount))
        print("******************************************************\n\n")
        

    def checkAckPackets(self):
        time.sleep(0.2)
        while True:
            #self.channelEvent.wait(const.senderTimeout)
            print("(Sender{}:) ACK checking for Packet!".format(self.name+1))
            if not self.endTransmitting: packet = self.channelToSender.recv()
            else: break
            print("BOOM!")
            if packet._type == 0:
                if packet.checkForError():
                    if packet.seqNo == self.seqNo:
                        #self.channelEvent.clear()
                        self.timeoutEvent.set()
                        self.receivedAck = True
                    else: # resend needed
                        #self.resendCurrentPacket()
                        #self.timeoutEvent.set()
                        self.receivedAck = False
                        self.timeoutEvent.clear()
                else:
                    #self.resendCurrentPacket()
                    #self.timeoutEvent.set()
                    self.receivedAck = False
                    self.timeoutEvent.clear()
            else: 
                #self.resendCurrentPacket()
                #self.timeoutEvent.set()
                self.receivedAck = False
                self.timeoutEvent.clear()
            




    def transmit(self):
        
        sendingThread = threading.Thread(name="SendingThread", target=self.putDataInPipe)

        ackCheckThread = threading.Thread(name='ackCheckThread', target=self.checkAckPackets)

        sendingThread.start()
        ackCheckThread.start()

        sendingThread.join()
        ackCheckThread.join()



