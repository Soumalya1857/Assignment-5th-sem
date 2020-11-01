import socket
import addRedundancy,error
from colorama import Fore, Style

sender = socket.socket()
sender.connect(('localhost',5000))
########################################

filename = input("Enter the Filename: ")
method = input(Fore.YELLOW+"Enter the name of the method!\n* LRC\n* CRC\n* VRC\n* Checksum\nEnter the name: ")
Style.RESET_ALL
crc = ''
if method.lower() == 'vrc': addRedundancy.VRC(filename)
elif method.lower() == 'checksum': addRedundancy.CHECKSUM(filename)
elif method.lower() == 'lrc': addRedundancy.LRC(filename)
elif method.lower() == 'crc': crc = addRedundancy.CRCinterface(filename)

Style.RESET_ALL
# need to send the method name to the receiver
sender.send(bytes(method,'utf-8'))

# check if the method is crc..then we need to send the crc also
if method.lower() == 'crc':
    sender.send(bytes(crc,'utf-8'))

outFile = method.upper()+'Output.dat'

#injecting error
error.eject_error(outFile)
sender.send(bytes(outFile,'utf-8'))
types = sender.recv(1024).decode()
msg = sender.recv(1024).decode()
print(Fore.LIGHTBLUE_EX+"***************MSG**************")
if types == 'success':
    print(Fore.GREEN + msg)
else: print(Fore.RED + msg)
print(Fore.LIGHTBLUE_EX+"*********************************")
Style.RESET_ALL