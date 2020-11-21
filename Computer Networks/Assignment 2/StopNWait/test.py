
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
    

import multiprocessing 
import time

def sender(conn, msgs):
    for msg in msgs:
        print("sleeping...")
        time.sleep(1)
        conn.send(msg)
        print("Sent the message: {}".format(msg))
    conn.close()

# def sender(conn, msgs): 
	# """ 
	# function to send messages to other end of pipe 
	# """
	# for msg in msgs:
        # print("sleeping...")
        # time.sleep(1)
        # conn.send(msg) 
        # print("Sent the message: {}".format(msg)) 
	# conn.close() 

def receiver(conn): 
	""" 
	function to print the messages received from other 
	end of pipe 
	"""
	while 1: 
		msg = conn.recv() 
		if msg == "END": 
			break
		print("Received the message: {}".format(msg)) 

if __name__ == "__main__": 
	# messages to be sent 
	msgs = ["hello", "hey", "hru?", "END"] 

	# creating a pipe 
	parent_conn, child_conn = multiprocessing.Pipe() 

	# creating new processes 
	p1 = multiprocessing.Process(target=sender, args=(parent_conn,msgs)) 
	p2 = multiprocessing.Process(target=receiver, args=(child_conn,)) 

	# running processes 
	p1.start() 
	p2.start() 

	# wait until processes finish 
	p1.join() 
	p2.join() 


#fileRead("input.txt")


"""
channel will call event.set() after putting a object
sender will event.clear() after receiving an ack
sender will wait untill an object put into the pipe
"""