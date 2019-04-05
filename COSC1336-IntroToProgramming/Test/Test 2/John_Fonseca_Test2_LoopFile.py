import os
#Defining Main
def main():

    #Accumulator
    total = 0
    finalTotal = 0

    #Create File to write data to
    numFile = open("numbers.txt", 'w')

    #Loop 10 times and write each iteration to the file
    for count in range(1, 11):
        numFile.write(str(count) + '\n')
        
    #Close File
    numFile.close()

    #Open File
    readFile = open("numbers.txt", 'r')

    #Read line
    line = readFile.readline()
    print("**********Numbers.txt**********")
    
    #Read File
    while line !='':
        #Convert string to number
        line = int(line)
        #Calculate Total for numbers read
        total += line
        print("Number Read: ", line)
        line = readFile.readline()

    #Close the file read
    readFile.close()

    #Display Calculated Total
    print("Calculated Total for Numbers Read: ", total)

    #Remove 16, 17 and 18 from file
    #Create File to write data to
    numFile = open("numbers.txt", 'a')
    
    #Loop 10 times and write each iteration to the file
    for count in range(11, 21):
        numFile.write(str(count) + '\n')

    #Close File
    numFile.close()

    #Create temp file
    tempFile = open("temp.txt", 'w')

    #Open File
    readFile = open("numbers.txt", 'r')

    #Read line
    line = readFile.readline()
    
    #Delete numbers 16, 17 and 18 from file
    while line != '':
        #Convert string to number
        line = int(line)
        if line != 16 and line != 17 and line != 18:
            tempFile.write(str(line) + '\n')
        else:
            #Value not written to file
            print()
            
        #Read next line
        line = readFile.readline()
            
    #Close File
    tempFile.close()

    #Close the file read
    readFile.close()

    #Change the number 10 to 50
    #Create temp file
    temp2File = open("temp2.txt", 'w')
    
    #Open File
    readFile = open("temp.txt", 'r')

    #Read line
    line = readFile.readline()
    
    #Change number 10 to 50
    while line != '':
        #Convert string to number
        line = int(line)
        if line != 10:
            temp2File.write(str(line) + '\n')
        else:
            temp2File.write("50" + '\n')

        #Read next line
        line = readFile.readline()

    #Close File
    temp2File.close()

    #Close the file read
    readFile.close()

    #Remove and Rename Files
    os.remove("temp.txt")
    os.remove("numbers.txt")
    os.rename("temp2.txt", "numbers.txt")

    #Display Final Result
    #Open File
    readFile = open("numbers.txt", 'r')

    #Read line
    line = readFile.readline()
    print("**********Numbers.txt Final Result**********")
    
    #Read File
    while line !='':
        #Convert string to number
        line = int(line)
        #Calculate Total for numbers read
        finalTotal += line
        print("Number Read: ", line)
        line = readFile.readline()

    #Close the file read
    readFile.close()

    #Display Calculated Total
    print("Calculated Total for Numbers Read: ", finalTotal)

#Calling Main Function
main()
