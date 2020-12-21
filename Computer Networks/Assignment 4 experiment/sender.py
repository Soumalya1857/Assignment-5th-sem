import multiprocessing
import random
import time
import threading
import sys
#sys.path.append('../package')
import const

# thread.Lock
# release and acquire

class Sender:
    def __init__(self, name, walshCode, senderToChannel):
        self.name                   = name
        #self.fileName               = fileName
        self.senderToChannel        = senderToChannel # a pipe
        self.walshCode              = walshCode # need the matrix
        self.data                   = dict()
               
        #self.nextTimeSlot       = nextTimeSlot # threading object
        # self.lock1                  = lock1
        # self.lock2                  = lock2
        # self.feedBackFromChannel    = feedBackFromChannel

    
    def openFile(self, fileName):
        try:
            file = open("./input/"+fileName, 'r')
        except IOError:
            sys.exit("No file exit with name {} !".format(fileName))

        return file
    
    def sendData(self):
        # startTime = time.time()
        # file = self.openFile(self.fileName)

        # totalBitSent = 0
        # byte = file.read(const.defaultDataPacketSize)
        # while byte:

        #     # send the data bits of byte
        #     data = '{0:08b}'.format(ord(byte))
        #     for i in range(len(data)):
        #         dataToSend = []
        #         dataBit = int(data[i])
        #         if dataBit == 0: dataBit = -1
               

        #         for j in self.walshCode:
        #             dataToSend.append(j * dataBit)
        #         ##############################################
        #         self.lock1.acquire()
        #         print("(Sender:)LOCK ACQUIRED!")
        #         self.senderToChannel.send(dataToSend)
        #         self.lock1.release()
        #         print("(Sender:)LOCK RELEASED!")
        #         ##############################################
        #         print("(Sender{}:) data bit send {}".format(self.name+1, dataBit))
        #         print("Sender waiting for Channel nextTimeSlot")
        #         #################################################
        #         self.lock2.acquire()
        #         time.sleep(0.5)
        #         print("(Sender Recv)" + str(time.time()))
        #         self.feedBackFromChannel.recv()
        #         self.lock2.release()
        #         print("(Sender:)Wait over for sender!")
        #         ################################################

        #     byte = file.read(const.defaultDataPacketSize)
        #     #time.sleep(0.05)
        
        # print("(Sender{}:) DONE SENDING...".format(self.name + 1))

        # while(True):
        #     silent = 0
        #     self.lock.acquire()
        #     print("(Sender:)LOCK ACQUIRED!")
        #     self.senderToChannel.send(silent)
        #     self.lock.release()
        #     print("(Sender:)LOCK RELEASED!")

        #     self.lock.acquire()
        #     garbage = self.feedBackFromChannel.recv()
        #     self.lock.release()
        #     print("(Sender:)Wait over for silent sender!")
           
        #     #nextTimeSlot.wait()
        #     #time.sleep(0.05)

        self.preProcessing()
        print("(Sender:)Preprocessing done!!!")
        length = len(self.data[1])


        for i in range(length):
            dataToSend = [0 for k in range(len(self.walshCode[0]))]
            for j in range(1,const.totalSenderNumber+1):
                tempData = self.data[j][i] #list
                for k in range(len(self.walshCode[0])):
                    dataToSend[k] += tempData[k]
            
            self.senderToChannel.send(dataToSend)


   



    def preProcessing(self):
        for i in range(1,const.totalSenderNumber+1):
            fileName = "input"+str(i+1)+".txt"
            self.data[i] = []
            file = self.openFile(fileName)
            byte = file.read(const.defaultDataPacketSize)
            while byte:
                data1 = '{0:08b}'.format(ord(byte))
                for j in range(len(data1)):
                    dataToAppend = [] 
                    dataBit = int(data1[j])
                    if dataBit == 0: dataBit = -1

                    for k in self.walshCode[i-1]:
                        dataToAppend.append(k * dataBit)
                    
                    self.data[i].append(dataToAppend)
                byte = file.read(const.defaultDataPacketSize)

        #print(self.data)

                



    def startSender(self):
        senderThread = threading.Thread(name="sender"+str(self.name+1),
                                        target=self.sendData)
        
        senderThread.start()
        senderThread.join()
        
        


            



