
import sys
sys.path.append('../package')
import helper
from packet import *

def fileRead(filename):
    file = open(filename, "r")
    file.seek(0,2)
    fileSize = file.tell() / 36.0
    print(fileSize)
    file.seek(0,0)
    byte = file.read(36)
    count = 0
    while byte:
        byte = file.read(36)
        count+=1
    print(count)

    file.close()
    



fileRead("input.txt")


"""
channel will call event.set() after putting a object
sender will event.clear() after receiving an ack
sender will wait untill an object put into the pipe
"""