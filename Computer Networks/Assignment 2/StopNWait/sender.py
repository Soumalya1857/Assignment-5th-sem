
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
    def __init__(self, name, receiverAddress, fileName, senderToChannel, channelToSender, channelEvent): # last two needs to be shared queue
        self.name               = name
        self.fileName           = fileName
        self.packetType         = {'data' : 0, 'ack' : 1}
        self.dest               = self.selectReceiver()
        self.seqNo              = 0
        self.receiverAddress    = receiverAddress
        self.senderToChannel    = senderToChannel
        self.channelToSender    = channelToSender
        self.channelEvent       = channelEvent
        self.timeoutEvent       = threading.Event()
        self.endTransmitting    = False
        self.receivedAck        = False # true if ack received and verified as valid
        #self.recentPacket exists

    def selectReceiver(self):
        return random.randint(0, const.totalReceiverNumber-1)

    def openFile(self, filename = self.fileName):
        try:
            file = open(filename, 'r')
        except IOError:
            sys.exit("No file exit with name {} !".format(filename))
        
        return file

    def resendCurrentPacket(self):
        self.channelToSender.send(self.recentPacket)

    def putDataInPipe(self,filename):

        print("***********************************")
        print("Sender{} starts sending data to Receiver{}".format(self.name, self.receiverAddress))
        print("***********************************\n\n")
        file = self.openFile(filename)
        # file.seek(0,2)
        # fileSize = file.tell()
        # file.seek(0,0)

        byte = file.read(const.defaultDataPacketSize)
        self.seqNo = 0
        pktCount = 0
        totalPktCount = 0
        while byte:
            packet = Packet(self.packetType['data'], seqNo, byte, self.name, self.dest).makePacket()
            self.recentPacket = packet
            self.channelToSender.send(packet)
            pktCount == 1
            totalPktCount += 1
            print("Packet {} has been send!".format(pktCount))
            while not self.receivedAck: # timeout does happen
                #resend needed
                self.timeoutEvent.wait(const.senderTimeout)# if timeout resend
                time.sleep(0.2)
                if not self.receivedAck: 
                    self.resendCurrentPacket()
                    totalPktCount += 1
                    print("Packet {} has been resending!".format(pktCount))
                else: break
            self.timeoutEvent.clear()

            self.seqNo = (self.seqNo+1)%2
            byte = file.read(const.defaultDataPacketSize)
        
        self.endTransmitting = True
        file.close()

        print("\n*****************STATS******************")
        print("Total packets: {}\n Total Packets send {}".format(pktCount, totalPktCount))
        print("*****************************************\n\n")
        

    def checkAckPackets(self):
        while True:
            self.channelEvent.wait(const.senderTimeout)
            if not self.endTransmitting: packet = self.channelToSender.recv()
            else: break
            if packet._type == 0:
                if packet.checkForError():
                    if packet.seqNo == self.seqNo:
                        self.channelEvent.clear()
                        self.timeoutEvent.set()
                        self.receivedAck = True
                    else: # resend needed
                        #self.resendCurrentPacket()
                        self.timeoutEvent.set()
                        self.receivedAck = False
                        self.timeoutEvent.clear()
                else:
                    #self.resendCurrentPacket()
                    self.timeoutEvent.set()
                    self.receivedAck = False
                    self.timeoutEvent.clear()
            else: 
                #self.resendCurrentPacket()
                self.timeoutEvent.set()
                self.receivedAck = False
                self.timeoutEvent.clear()
            




    def transmit(self, receiver=self.receiverAddress, filename=self.fileName):
        
        sendingThread = threading.Thread(name="SendingThread", target=self.putDataInPipe, 
                                            args=(self.fileName,))

        ackCheckThread = threading.Thread(name='ackCheckThread', target=self.checkAckPackets)

        sendingThread.start()
        ackCheckThread.start()

        sendingThread.join()
        ackCheckThread.join()



