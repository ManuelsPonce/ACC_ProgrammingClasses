def main():
    write_file()
    sum_file()
    print('Press ENTER to add the numbers 11 through 20 to the file')
    moveforward = input('')
    add_file()
    sum_file()
    print('Press ENTER to delete numbers 16, 17, and 18 from the file.')
    moveforward = input('')
    delete_file()

    sum_file()
    print('Press ENTER to convert the number 10 to 50.')
    moveforward = input('')    

    convert_file()
    sum_file()
    
    
#write a program using a for loop
#that creates a file and adds the integers 1 through 10
#name the file numbers.txt
def write_file():
    infile= open('numbers.txt', 'w')
    for num in range(1,11):
        infile.write(str(num) + '\n')
    infile.close()
    print('\t','The numbers have been added to the file numbers.txt')
    print('')
    print('Press ENTER to SUM the integers and calculate their total.')
    moveforward = input('')
    
#read all the numbers stored in the file and calculate their total
#display all the numbers in the file and the calculated total
def sum_file():
    infile = open('numbers.txt', 'r')
    total = 0
    line = infile.readline()
    while line != '':
        convert = int(line)
        print(convert)
        total += convert
        line = infile.readline()
    print('')
    print('\t','The SUM of the integers is', total)
    print('')

#using a for loop, add the numbes 11 through 20
def add_file():
    infile = open('numbers.txt', 'a')
    for num in range (11,21):
        infile.write(str(num) + '\n')
    infile.close()
    print('\t','The numbers have been added to the file numbers.txt')
    print('')

#delete numbers 16, 17, and 18
def delete_file():
    import os
    infile = open('numbers.txt', 'r')
    temp_file = open('temp.txt', 'w')
    line = infile.readline()
    while line != '':
        number = int(line)
        line = line.rstrip('\n')
        if number != 16 and number!= 17 and number!= 18:
            temp_file.write(str(number) + '\n')
        line = infile.readline()
    infile.close()
    temp_file.close()
    os.remove('numbers.txt')
    os.rename('temp.txt', 'numbers.txt')
    print('\t','The numbers have been removed from the file numbers.txt')
    print('')

#change the number 10 to 50
def convert_file():
    import os
    num = 10
    new = 50
    infile = open('numbers.txt', 'r')
    temp_file = open('temp.txt', 'w')
    line = infile.readline()
    while line != '':
        number = int(line)
        line = line.rstrip('\n')
        if number != num:
            temp_file.write(str(number) + '\n')
        else:
            temp_file.write(str(new) + '\n')
        line = infile.readline()
    infile.close()
    temp_file.close()
    os.remove('numbers.txt')
    os.rename('temp.txt', 'numbers.txt')
    print('\t','The number 10 has been converted in the file numbers.txt')
    print('')

main()
                 
