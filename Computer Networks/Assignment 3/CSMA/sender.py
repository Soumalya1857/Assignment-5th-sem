
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
    def __init__(self, name, fileName, senderToChannel, channelToSender, idle, collision, collisionCount): #, channelEvent): # last two needs to be shared queue
        self.name               = name
        self.fileName           = fileName
        self.packetType         = {'data' : 0, 'ack' : 1}
        self.dest               = self.selectReceiver()
        self.seqNo              = 0
        self.senderToChannel    = senderToChannel
        self.channelToSender    = channelToSender
        self.timeoutEvent       = threading.Event()
        self.endTransmitting    = False
        self.receivedAck        = False         # true if ack received and verified as valid
        self.idle               = idle          # just a boolean value...initially true
        self.collision          = collision     # initially false
        self.collisionCount     = collisionCount
        #self.recentPacket exists

    def selectReceiver(self):
        return random.randint(0, const.totalReceiverNumber-1)
        #return 0 # for testing with 1 sender

    def openFile(self, filename):
        try:
            file = open(filename, 'r')
        except IOError:
            sys.exit("No file exit with name {} !".format(filename))
        
        return file

    def resendCurrentPacket(self):
        self.senderToChannel.send(self.recentPacket)

#*******************************************************************************************************************
#*******************************************************************************************************************







    def sendDataWithOnePersistent(self, packet):
        """
        ###############################################################################
        # here goes all the logic
        ####################### 1 persistent ##################             
        # # doesn't involve slotted time concept
        """
        while True:

            ranNumber = random.random() // const.randomNumber
            time.sleep(ranNumber) # grab a time and sleep for that 0.0 <= time <= 0.1
            # sense and grab the channel for sending
            if self.idle == True:
                # channel is idle it can send data with prob 1
                # but as if collision = true means other thread already put data in pipe...collision
                if self.collision == True:
                    # collision occur...resend data
                    self.collisionCount += 1
                else:
                    # collision doesn't happen grab the channel
                    self.collision = True
                    # wait for dataTransmission time tl + tp
                    time.sleep(const.vulnarableTime)
                    self.idle = False
                    self.senderToChannel.send(packet) # send datapacket
                    time.sleep(const.packetPropagationTime)
                    # now set the channel to the prev state
                    self.collision = False
                    self.idle = False
                    break
            else:
                    # retry again
                continue

            ###############################################################################





#*******************************************************************************************************************
#*******************************************************************************************************************


    def putDataInPipe(self):

        time.sleep(0.2)
        startTime = time.time()
        print("***********************************")
        print("Sender{} starts sending data to Receiver{}".format(self.name+1, self.dest+1))
        print("***********************************")
        file = self.openFile(self.fileName)

        byte = file.read(const.defaultDataPacketSize)
        self.seqNo = 0
        pktCount = 0
        totalPktCount = 0
        while byte:
            packet = Packet(self.packetType['data'], self.seqNo, byte, self.name, self.dest).makePacket()
            self.recentPacket = packet

            ###############################################################################
            self.sendDataWithOnePersistent(packet)
            ###############################################################################

            self.seqNo = (self.seqNo+1)%2
            pktCount += 1
            totalPktCount += 1
            print("(Sender{}:) Packet {} has been sent!".format(self.name+1, pktCount))
            while not self.receivedAck: # timeout does happen
                #resend needed
                self.timeoutEvent.wait(const.senderTimeout)# if timeout resend
                #time.sleep(0.2)
                if not self.timeoutEvent.isSet(): 

                    ###################################################################
                    self.sendDataWithOnePersistent(self.recentPacket)
                    ###################################################################
                    totalPktCount += 1
                    print("(Sender{}:) Packet {} has been resending!".format(self.name+1,pktCount))
                else: break
            self.timeoutEvent.clear()

            byte = file.read(const.defaultDataPacketSize)
        
        self.endTransmitting = True
        file.close()
        endTime = time.time()

        print("\n*****************(Sender{}:)STATS******************".format(self.name+1))
        print("Total packets: {}\n Total Packets send {}".format(pktCount, totalPktCount))
        print("Avg. time for sender: {} (in seconds)".format(str(endTime-startTime)[:4]))
        print("******************************************************\n\n")
        

    def checkAckPackets(self):
        time.sleep(0.2)
        while True:
            if not self.endTransmitting: packet = self.channelToSender.recv()
            else: break
            if packet.type == 1:
                if packet.checkForError():
                    if packet.seqNo == self.seqNo:
                        self.timeoutEvent.set()
                        print("(Sender{}:) Packet has been reached successfully!".format(self.name+1))
                    else: # resend needed
                        #print("**********ACK PACKETS DISCARDED1********")
                        self.timeoutEvent.clear()
                else:
                    self.timeoutEvent.clear()
                    #print("**********ACK PACKETS DISCARDED2********")
            else: 
                self.timeoutEvent.clear()
                #print("**********ACK PACKETS DISCARDED3********")
            
            #self.receivedAck = False
            




    def transmit(self):
        
        sendingThread = threading.Thread(name="SendingThread", target=self.putDataInPipe)

        ackCheckThread = threading.Thread(name='ackCheckThread', target=self.checkAckPackets)

        sendingThread.start()
        ackCheckThread.start()

        sendingThread.join()
        ackCheckThread.join()



