# Test 2 question 22 Create a file and write numbers to file
#
# 
#
# 1) open file numbers.txt for writing
# 2) write numbers 1-10 to file
# 3) close file
#
# 3) read numbers from file and calculate totals
# 4) display these results on screen
# 5) close file
#
# 6) append numbers 11-20 to file
#
# 7) change number 10 to 50 and delete 16,17,18: open file,
#    read from numbers.txt, write to tmp.txt, delete file numbers.txt,
#    rename tmp.txt
#
import os
FILE_NAME = 'numbers.txt'

def main():

    # write 1-10 to file
    outfile = open(FILE_NAME,'w') # open file for writing
    for i in range(1,11):
        outfile.write(str(i) + '\n')
    outfile.close()

    # read numbers and compute total
    infile = open(FILE_NAME,'r')
    total = 0
    for line in infile:
        num = int(line)
        total += num
        print('\n Number from file is: ',num)
    print(' Total of all numbers read from file: ',total)
    infile.close()

    # append 11-20 to file
    outfile = open(FILE_NAME,'a') # open file for appending
    for i in range(11,21):
        outfile.write(str(i) + '\n')
    outfile.close()

   # change 10 to 50 and remove 16,17,18 from file    
    infile = open(FILE_NAME,'r')
    outfile = open('tmp.txt','w') # use a temp file
    for line in infile:
        num = int(line)
        if num == 10: # replace 10 with 50
            num = 50
        if (num != 16) and (num != 17) and (num !=18): #remove 16,17,18
            outfile.write(str(num) + '\n')
            
    infile.close()
    outfile.close()

    os.remove(FILE_NAME)
    os.rename('tmp.txt',FILE_NAME)
    
       
#   
main() # call main function
#
