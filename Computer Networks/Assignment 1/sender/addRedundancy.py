def VRC(filename):
    inFile = open(filename, 'rb')
    byte = inFile.read(1) # reading 1 byte at a time
    while byte:

        # implementing even parity method
        # sender append a 1 to make the byte with even no of 1s

        count = 0
        for i in range(8):
            if byte and (1<< i):
                count += 1
        byte = inFile.read(1)
