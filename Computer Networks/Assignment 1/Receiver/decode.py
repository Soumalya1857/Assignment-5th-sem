import sys
sys.path.append('../package')
import const, helper

################################################
#VRC
################################################
def VRC(filename):
    
    print("Decoding with VRC technique!")
    try:
        outFile = open("/home/soumalya/Desktop/MotherFolder/Assignment-5th-sem/Computer Networks/Assignment 1/"+filename, 'rb')
    except IOError:
        sys.exit("No such file exists!")

    flag = True
    byte = outFile.read(const.ENCODE_PACKET_SIZE)
    while(byte):
        res = ''
        byteVal = int.from_bytes(byte, byteorder='big')
        res = str(bin(byteVal))[2:]
        byte = outFile.read(const.ENCODE_PACKET_SIZE)
        parity = int.from_bytes(byte, byteorder='big')
        res += str(bin(parity))[2:]
        if helper.checkParity(res) == False:
            print("Corrupted File Received!\n Request for retransmission!")
            flag = False
            break
        byte = outFile.read(const.ENCODE_PACKET_SIZE)

        #print(byteVal)
    if flag: print("File received successfully!")
    outFile.close()


################################################
#LRC
################################################

def LRC(filename):

    print("Decoding with LRC technique!")
    try:
        outFile = open("/home/soumalya/Desktop/MotherFolder/Assignment-5th-sem/Computer Networks/Assignment 1/"+filename, 'rb')
    except IOError:
        sys.exit("No such file exists!")

    LRCdata = []
    flag = True
    byte = outFile.read(const.ENCODE_PACKET_SIZE)
    while byte:
        byteVal = int.from_bytes(byte, byteorder='big')
        LRCdata.append(byteVal)
        byte = outFile.read(const.ENCODE_PACKET_SIZE)
    

    for i in range(8):
        count = 0
        for data in LRCdata:
            bit = (data & (1<<i)) >> i
            count += bit
        if count %2 == 1: 
            print("Corrupted File received!\nRequest for retransmission!")
            flag = False
            break

    if flag: print("File received successfully!")

    outFile.close()


################################################
#CHECKSUM
################################################

def CheckSum(filename):

    print("Decoding with CheckSum technique!")
    try:
        outFile = open("/home/soumalya/Desktop/MotherFolder/Assignment-5th-sem/Computer Networks/Assignment 1/"+filename, 'rb')
    except IOError:
        sys.exit("No such file exists!")

    
    result = 0
    byte = outFile.read(const.ENCODE_PACKET_SIZE)
    while(byte):
        result += int.from_bytes(byte, byteorder='big')
        byte = outFile.read(const.ENCODE_PACKET_SIZE)
    
    while True:
        if result <= 255: break
        temp = result >> 8
        result = result - (temp << 8)
        result = result + temp
    
    #calculating complement
    result = 255-result
    if(result != 0): 
        print("Corrupted File received!\nRequest for retransmission!!")
    else: print("File received successfully!")


################################################
#CRC
################################################
def CRC(filename,crc):
    print("Decoding with CRC technique!")
    try:
        outFile = open("/home/soumalya/Desktop/MotherFolder/Assignment-5th-sem/Computer Networks/Assignment 1/"+filename, 'rb')
    except IOError:
        sys.exit("No such file exists!")

    byte = outFile.read(const.ENCODE_PACKET_SIZE)
    lencrc = len(crc)
    flag = True
    while byte:
        byteAscii = str(bin(ord(byte)))[2:]
        print("original byteAscii: "+ byteAscii)
        byte = outFile.read(const.ENCODE_PACKET_SIZE)
        print("remainder: "+str(bin(ord(byte)))[2:])
        redundant = str(bin(ord(byte)))[2:lencrc+2]
        byteAscii += redundant # this is the value of the dividend
        print("byteAscii: " + byteAscii )
        while(lencrc <= len(byteAscii)):
            if(byteAscii[0] == '0'):xorval = helper.xor('0'*lencrc, byteAscii[0:lencrc])
            else: xorval = helper.xor(crc, byteAscii[0:lencrc])

            if(lencrc == len(byteAscii)):
                temp = byteAscii[1:]
                remainder = int(temp,2)
                print("remainder: " + str(remainder))   
                if(remainder != 0):
                    print("Corrupted File received!\nRequest for retransmission!")
                    flag = False
                    break
            byteAscii = xorval[1:] + byteAscii[lencrc:]
        if not flag: break
        byte = outFile.read(const.ENCODE_PACKET_SIZE)

        if flag: print("File received successfullly!")
        outFile.close()
                
                
    



if __name__ == "__main__":
    if len(sys.argv) < 3:
        sys.exit("No input file or method name passed!")
    if len(sys.argv) > 3:
        sys.exit("Too many arguments passed! ")



    filename = sys.argv[-2]
    checkingType = sys.argv[-1]

    if checkingType.lower() == 'vrc': VRC(filename)
    elif checkingType.lower() == 'checksum': CheckSum(filename)
    elif checkingType.lower() == 'lrc': LRC(filename)
    elif checkingType.lower() == 'crc': CRC(filename, "1001")