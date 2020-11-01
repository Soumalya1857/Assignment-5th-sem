import sys
sys.path.append('../package')
import const, helper

def crc_code(str, crc):
    
    lencrc = len(crc)
    
    while lencrc <= len(str):
        if(str[0] == '0'):
            xorval = helper.xor('0'*lencrc, str[0:lencrc])
        else:
            xorval = helper.xor(crc, str[0:lencrc])
        #print(xorval)
        if(lencrc == len(str)):
            print(xorval[1:])
        str = xorval[1:] + str[lencrc:]

if __name__ == "__main__":
    crc_code("1100100001","1001")