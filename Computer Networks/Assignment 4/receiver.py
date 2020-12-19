import multiprocessing
import random
import time
import threading
import sys
sys.path.append('../package')
import const


class Receiver:
    def __init__(self, name, walshTable, channelToReceiver, waitTillReceived):
        self.name               = name
        self.walshTable         = walshTable
        self.channelToReceiver  = channelToReceiver
        self.waitTillReceived   = waitTillReceived
        self.senderToReceive    = self.selectSender()

    def selectSender(self):
        num = random.randint(0, const.totalSenderNumber-1)
        return num
    