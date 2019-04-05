#question 22
#create file
import shutil
def main():
    myfile = open('numbers.txt','w')
    
    for number in range(10):
        myfile.write(str(number + 1) +'\n')
    myfile.close() #close file
    print('Numbers in file')
    display_numbers()
    print('The total for numberrs in file is: ',read_number() )
    print('----------------------------------------')
    add_numbers()
    delete_numbers()
    print('Remove 16,17 and 18')
    display_numbers()
    change_numbers()

def read_number():
    total = 0
    myfile = open('numbers.txt','r')
    line = myfile.readline()
    #print(line)
    while line !='':
        line = line.rstrip('\n')
        total += int(line)
        #print(line)
        #print('Running Total: ', total)
        line = myfile.readline()
    myfile.close() #close file
    return total

def display_numbers():
    myfile = open('numbers.txt', 'r')
    line = myfile.readline()
    while line != '':
        line = line.rstrip('\n')
        print(line)
        line = myfile.readline()
    myfile.close() #close file

def add_numbers():
    myfile = open('numbers.txt', 'a')
    #print('yes')
    for numbers in range (11,21):
        myfile.write(str(numbers)+'\n')
    myfile.close()

def delete_numbers():
    myfile = open('numbers.txt','r')
    tempfile = open('temp_numbers.txt','w')
    line = myfile.readline()
    while line !='':
        line = line.strip('\n')
        line = int(line)
        if line != 16 and line !=17 and line !=18:
            line = str(line)
            tempfile.write(line + '\n')
        line = myfile.readline()
  
    myfile.close()
    tempfile.close()
    shutil.copy('temp_numbers.txt','numbers.txt')

def change_numbers():
    myfile = open('numbers.txt', 'r')
    temp = open('temp.txt', 'w')
    line = myfile.readline()
    while line != '':
        line = line.strip('\n')
        line = int(line)
        if line == 10:
            line = 50
        line = str(line)
        temp.write(line + '\n')
        line = myfile.readline()
    myfile.close()
    temp.close()
    shutil.copy('temp.txt', 'numbers.txt')
    print('------------------------------')
    print('Replace 10 with 50')
    display_numbers()
    


#call main
main()
