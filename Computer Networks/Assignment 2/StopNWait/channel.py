import multiprocessing
import sys
sys.path.append('../package')
import helper
from packet import *

class Channel:
    def __init__(self, senderToChannel, channelToSender, receiverToChannel, channelToReceiver, senderEventList, receiverEventList):

        self.senderToChannel = senderToChannel
        self.channelToSender = channelToSender # these need to be queue list of exact size of no of sender or no of receiver
        self.receiverToChannel = receiverToChannel
        self.channelToReceiver = channelToReceiver
        self.senderEventList = senderEventList #to notify there is an ack 
        self.receiverEventList = receiverEventList #to notify channel the ack is in receiverToChannel pipe