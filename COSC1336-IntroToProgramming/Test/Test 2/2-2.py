def main():
    try:
        step1() #writes list of 1 - 10
        step2() #reads and finds total
        step3() #appends list of 11 - 20
        step2() #reads and finds total
        step4() #deletes 16,17,18
        step2() #reads and finds total
        step5() #replaces 10 with 50
        step2() #reads and finds total

    except ValueError:                         #IF THERE IS A ERROR WITH USER PUTTING WRONG VALUE THIS WILL DISPLAY
        print("Non-numerical value error. Use digits and '.'.")    
    except IOError:                            #IF THERE IS AN ERROR READING THE FILE THIS WILL DISPLAY
        print('Error reading file.')
    except:                                    #IF THERE IS ANY OTHER ERROR THIS WILL DISPLAY
        print('An error occured.')
    #finally:                                  #CLOSES ALL FILES WHEN PROGRAM CLOSES, but no need as all files closed in program already
    #    num_file.close()
    #    temp_file.close()
    
def step1():
    num_file=open('numbers.txt', 'w')
    counter=0
    while counter<10:    #writes list of 1 - 10
        counter+=1
        num_file.write(str(counter)+'\n')
    num_file.close()


def step2():
    num_file=open('numbers.txt', 'r')
    total=0
    for line in num_file: #reads line by line printing the values and finds total
        ammount=line.strip()
        print(ammount)
        total+=int(line.strip())
    print('The total of the numbers is: ', total)
    num_file.close()


def step3():
    num_file=open('numbers.txt', 'a')
    counter=10
    while counter<20:  #appends list of 11 - 20
        counter+=1
        num_file.write(str(counter)+'\n')
    num_file.close()
        
def step4():
    num_file=open('numbers.txt', 'r')
    temp_file=open('temp.txt', 'w')
    for line in num_file:   #writes all numbers EXCEPT 16,17,18 on temp.txt
        if int(line.strip())==16:
            num=0
        elif int(line.strip())==17:
            num=0
        elif int(line.strip())==18:
            num=0
        else:
            temp_file.write(line)
    num_file.close()
    temp_file.close()
    
    num_file=open('numbers.txt', 'w')
    temp_file=open('temp.txt', 'r')
    for line in temp_file:      #COPIES temp.txt to numbers.txt
        num_file.write(line)
    
    num_file.close()
    temp_file.close()

def step5():
    num_file=open('numbers.txt', 'r')
    temp_file=open('temp.txt', 'w')
    for line in num_file:     #writes all numbers AND REPLACES 10 with 50 on temp.txt
        if int(line.strip())==10:
            temp_file.write('50\n')
        else:
            temp_file.write(line)
    num_file.close()
    temp_file.close()
    
    num_file=open('numbers.txt', 'w')
    temp_file=open('temp.txt', 'r')
    for line in temp_file:      #COPIES temp.txt to numbers.txt
        num_file.write(line)
    
    num_file.close()
    temp_file.close()
    

main()
        
        



        
    
        
