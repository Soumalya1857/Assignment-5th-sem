import multiprocessing
import random
import time
import threading
import sys
import const
# sys.path.append('../package')
# import helper
# from packet import *

class Channel:
    def __init__(self, name, senderToChannel, channelToReceiver, waitTillReceived):
        self.name                   = name
        self.senderToChannel        = senderToChannel
        self.channelToReceiver      = channelToReceiver
        #self.lock                  = lock # thread.lock
        self.channelData            = [0 for i in range(const.totalSenderNumber)]  # channel data to be distributed
        self.waitTillReceived       = waitTillReceived #even
        #self.feedBackFromChannel    = feedBackFromChannel
        #self.nextTimeSlot          = nextTimeSlot # event
        #self.intialize             = False
        self.syncValue              = 0
        


    def takeDataFromSenderAndDistribute(self):
        # while True:
        #     # clear the receiver msg of receiving msg
        #     # self.waitTillReceived.clear()
        #     # print("Channel: Received clear....")
        #     # nextTimeSlot.clear()
        #     # print("Channel: Timeslot clear....")

        #     for i in range(const.totalSenderNumber):
            
        #         data = []
        #         print("(Channel)waiting for data...")
        #         data = self.senderToChannel.recv()
        #         print("(Channel)Channel...." + str(data))

        #         # only for one time
        #         # if not self.intialize: 
        #         #     self.channelData = [0 for i in range(len(data))]
        #         #     self.intialize = True

                
        #         # update channel Data
        #         for i in range(len(data)):
        #             self.channelData[i] += data[i] 
                
        #         print("(Channel) Channel boom!")
        #         self.syncValue += 1

        #         if self.syncValue == const.totalSenderNumber:   
        #             # distribute over every receiver
        #             for receiver in range(const.totalReceiverNumber):
        #                 self.channelToReceiver[receiver].send(self.channelData)

        #             print("(Channel) BROADCAST OVER!")
        #             #self.waitTillReceived.wait()
        #             print("(Channel) Wait over from channel! Receiver received")
                    
        #             # reset self.value and channelData for next bit transfer
        #             self.syncValue = 0
        #             self.channelData = [0 for i in range(len(data))]

        #             #############################################
        #             # notify all sender
        #             over = "Chal next slot ke liye ready ho ja!"
        #             for j in range(const.totalSenderNumber):
        #                 self.feedBackFromChannel.send(over)
        #                 print("(Channel Feedback)" + str(time.time()))
                        
        #                 print("(Channel) FeedBack..")

        #         #self.lock.release()
        #         #print("LOCK RELEASED!")
        #         #wait untill receiver received msg
        #         # time.sleep(0.1)
        #         # self.nextTimeSlot.set()
        #         # print("Channel Timeslot set:")
            
        #     #time.sleep(0.1)
        #     print("(Channel) NextTimeSlot for sender")



        while True:
            data = []
            data = self.senderToChannel.recv()
            for i in range(const.totalReceiverNumber):
                self.channelToReceiver[i].send(data)
            
    

    def startChannel(self):
        # senderThreadList = []
        # for i in range(const.totalSenderNumber):
        #     t = threading.Thread(name="Channel"+str(i+1),target=self.takeDataFromSenderAndDistribute,
        #                             args=(i,))
        #     senderThreadList.append(t)
        
        # for t in senderThreadList:
        #     t.start()
        

        # for t in senderThreadList:
        #     t.join()
        t = threading.Thread(name="channel", target=self.takeDataFromSenderAndDistribute)
        t.start()
        t.join()


