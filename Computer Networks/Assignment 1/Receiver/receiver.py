import socket
import decode
receiver = socket.socket()
receiver.bind(('localhost', 5000))
receiver.listen(1)
print("Receiver is listenting...")

while True:
    sender, addr = receiver.accept()
    print("Connection created!")
    method = sender.recv(1024).decode()
    method = method.lower()
    filename = sender.recv(1024).decode()
    print("Output file accepted!")
    # method = sender.recv(1024).decode()
    # method = method.lower()
    success = 0
    print("Decoding output file with {} method!".format(method))
    if method.lower() == 'vrc': success = decode.VRC(filename)
    elif method.lower() == 'checksum': success = decode.CHECKSUM(filename)
    elif method.lower() == 'lrc': success = decode.LRC(filename)
    elif method.lower() == 'crc': success = decode.CRC(filename, "1001")


    if not success: sender.send(bytes("Corrupted File received!\nRequest for retransmission!",'utf-8'))
    else: sender.send(bytes("No error detected! File received successfully!",'utf-8'))

    print("Receiver is still listenting...")
    
