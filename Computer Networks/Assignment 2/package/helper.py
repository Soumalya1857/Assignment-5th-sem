def checkSum(segData):
    # returnnig string

    total = 0
    data = [segData[i: i+16] for i in range(0, len(segData), 8)]
    for y in data:
        total += int(y,2)
    
    while True:
        if total <= 65535: break
        temp = total >> 8
        total = total - (temp << 8)
        total = total + temp
    
    ckSum = 65535 - total
    ckSumBits = '{0:016b}'.format(ckSum)
    return ckSumBits

def checkError(segData):
    total = 0
    data = [segData[i: i+16] for i in range(0, len(segData), 8)]
    for y in data:
        total += int(y,2)
    
    while True:
        if total <= 65535: break
        temp = total >> 8
        total = total - (temp << 8)
        total = total + temp
    
    ckSum = 65535 - total
    return 1 if ckSum == 0 else 0
    
