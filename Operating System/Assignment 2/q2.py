import random
import os
import time
import threading
from multiprocessing import Process, Lock, Event


class Caller:
    def __init__(self, name, callerToReceiver, receiverToCaller):
        self.name               = name
        self.callerToReceiver   = callerToReceiver # pipes for sending msgs
        self.receiverToCaller   = receiverToCaller # pipes for receiving msgs

    def sendMsgToReceiver(self):
        