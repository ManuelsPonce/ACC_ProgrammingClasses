def main():
    calc_average()
    determine_grade()

#create the calc_average function
def calc_average():
    #open a file to write to
    infile = open('grades.txt', 'w')
    #zero the total accumulator
    total = 0
    #create a for loop that limits the number of scores
    for count in range (1,6):
        #request the scores to be entered
        print('Please enter the score of test ', count, sep='')
        score = int(input(': '))
        #write the scores to the file
        infile.write(str(score) + '\n')
        #create a running total
        total = total + score
    #close the file
    infile.close()
    #determine the average
    average = total / 5
    print('The average for your 5 exams is: ', average)
#create the determine_grade function
def determine_grade():
    #open the file to read
    infile = open('grades.txt', 'r')
    #zero the total accumulator
    total = 0
    #zero the number accumulator
    num = 0
    #create the chart
    print('')
    print('#','  ', 'SCORE', '','GRADE')
    print('___________________')
    #read the primer line
    line = infile.readline()
    #read the rest of the file
    while line != '':
        #make the number an integer for calculation purposes
        number = int(line)
        #remove the return
        line = line.rstrip('\n')
        #set the grade parameters
        if number >= 90: 
            grade = ('A')
        elif number >= 80:
            grade =('B')
        elif number >= 70:
            grade = ('C')
        elif number >= 60:
            grade = ('D')
        else:
            grade = ('F')
        #generate a numbered list
        num = num + 1
        #create a running total
        total = total + number
        #read the next line
        line = infile.readline()
        #add the scores to the chart
        print( num, '   ', number, '    ', grade)
    #calculate the average
    average = total / 5
    #set the average grade parameters
    if average >= 90: 
        grade = ('A')
    elif average >= 80:
        grade =('B')
    elif average >= 70:
        grade = ('C')
    elif average >= 60:
        grade = ('D')
    else:
        grade = ('F')
    #add the average to the chart
    print('___________________')
    print('avg', '', average, '   ', grade) 
main()
