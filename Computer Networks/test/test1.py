import multiprocessing
import time
import sys
import threading
sys.path.append('../Assignment 2/package')
from packet import *


class Person:
    def __init__(self):
        self.name = 'Soumalya'
        self.age = 20
    def __str__(self):
        return "{} is {} years old!".format(self.name, self.age)

def sendData(writeHead):
    p = Packet(0,1,"aay baba dekhe ja", 1,1).makePacket()
    print("Sleeping...")
    time.sleep(2)
    writeHead.send(p)
    print("Done!!")


def receiveData(readHead):
    print("taking..")
    p = readHead.recv()
    print(p)

if __name__ == "__main__":
    readHead, writeHead = multiprocessing.Pipe()
    t1 = threading.Thread(target=sendData, args=(writeHead,))
    t2 = threading.Thread(target=receiveData, args=(readHead,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()