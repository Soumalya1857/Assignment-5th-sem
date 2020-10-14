
import sys
sys.path.append('../package')
import const


def VRC(filename):
    try:
        inFile = open(filename, 'r')
    except IOError:
        sys.exit("No such file exit!")

    outFile = open("/home/soumalya/Desktop/MotherFolder/Assignment-5th-sem/Computer Networks/Assignment 1/VRCOutput.dat","wb")
    print("Output file created!")
    byte = inFile.read(const.ENCODE_PACKET_SIZE) # reading 1 byte at a time
    
    while byte:
        # implementing even parity method
        # sender append a 1 to make the byte with even no of 1s

        byteAscii = ord(byte) # returns the ascii value of a letter
        count = 0
        for i in range(8):
            if byteAscii and (1<< i):
                count += 1
        byteAscii = byteAscii << 1
        if count % 2 == 1:
            byteAscii = byteAscii and 1

        print(byteAscii.bit_length())
        outFile.write(byteAscii.to_bytes(1,"big"))
        byte = inFile.read(const.ENCODE_PACKET_SIZE)
    
    inFile.close()
    outFile.close()

    print("VRC added to the text file!")


if __name__ == "__main__":
    if len(sys.argv) < 2:
        sys.exit("No input file passed!")
    if len(sys.argv) > 2:
        sys.exit("Too many arguments passed! ")

    filename = sys.argv[-1]
    VRC(filename)