import multiprocessing
import random
import time
import threading
import sys
sys.path.append('../package')
import helper
import const
from packet import *

class Channel:
    def __init__(self, name, senderToChannel, channelToReceiver, lock, waitTillReceived, nextTimeSlot):
        self.name               = name
        self.senderToChannel    = senderToChannel
        self.channelToReceiver  = channelToReceiver
        self.lock               = lock # thread.lock
        self.channelData        = []  # channel data to be distributed
        self.waitTillReceived   = waitTillReceived #event
        self.nextTimeSlot       = nextTimeSlot # event
        self.intialize          = False
        self.syncValue          = 0
        


    def takeDataFromSenderAndDistribute(self, sender):
        while True:
            # clear the receiver msg of receiving msg
            self.waitTillReceived.clear()
            self.nextTimeSlot.clear()
            
            data = []
            data = self.senderToChannel[sender].recv()

            # only for one time
            if not self.intialize: 
                self.channelData = [0 for i in range(len(data))]
                self.intialize = True

            self.lock.acquire()
            # update channel Data
            for i in range(len(data)):
                self.channelData[i] += data[i] 
            
            self.syncValue += 1

            if self.syncValue == const.totalSenderNumber:
                # distribute over every receiver
                for receiver in range(const.totalReceiverNumber):
                    self.channelToReceiver[receiver].send(channelData)
                
                # reset self.value and channelData for next bit transfer
                self.syncValue = 0
                self.channelData = [0 for i in range(len(data))]
            self.lock.release()
            # wait untill receiver received msg
            self.waitTillReceived.wait()
            self.nextTimeSlot.set()
    

    def startChannel(self):
        senderThreadList = []
        for i in range(const.totalSenderNumber):
            t = threading.Thread(target=self.takeDataFromSenderAndDistribute,
                                    args=(i,))
            senderThreadList.append(t)
        
        for t in senderThreadList:
            t.start()
        

        for t in senderThreadList:
            t.join()


