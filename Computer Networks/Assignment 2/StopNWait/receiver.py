import multiprocessing
import sys
sys.path.append('../package')
import helper
from packet import *

class Receiver:
    def __init__(self, name, receiverToChannel, channelToReceiver):
        self.name = name
        self.receiverToChannel = receiverToChannel
        self.channelToReceiver = channelToReceiver

    def decodePacket(self):
        pass

    def sendAck(self):
        pass
    
    def terminateReceiver(self):
        pass
        