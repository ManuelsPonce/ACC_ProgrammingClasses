# This program will read employee names from a file
# and then ask the user how many hours each employee
# worked this week. It will then calculate each
# employees gross pay.

import os

def main():
    # Open the infile.
    infile = open('employee_names.txt', 'r')

    # Open the temp file.
    tempFile = open('temp.txt', 'w')

    # Create a list from the file.
    names = infile.readlines()

    index = 0
    while index < len(names):
        people = names[index].rstrip('\n')
        hours = input('Enter how many hours ' + people + \
                      ' worked: ')
        tempFile.write(people + '\n')
        tempFile.write(hours + '\n')
        index += 1

    # Close the infile.
    infile.close()

    # Close the tempFile.
    tempFile.close()

    # Delete the infile.
    os.remove('employee_names.txt')
    
    # Rename the temp file.
    os.rename('temp.txt', 'employee_names.txt')

    # Open the new employee_names.txt file.
    newFile = open('employee_names.txt', 'r')

    # Create a list from the new file.
    hoursWorked = newFile.readlines()

    # Gets the hours from the list.
    hours = hoursWorked[1:30:2]

    # Gets the names from the list.
    employees = hoursWorked[0:29:2]

    # Close the new file.
    newFile.close()

    # Strips the \n from the hours.
    index = 0
    while index < len(hours):
        hours[index] = int(hours[index].rstrip('\n'))
        index += 1

    # Strips the \n from the names.
    index = 0
    while index < len(employees):
        employees[index] = employees[index].rstrip('\n')
        index += 1


    index = 0
    for item in hours:
        if int(item) > 40:
            print(employees[index], 'should receive', ((item - 40) * 12 + (item * 12)))
            index += 1
        else:
            print(employees[index], 'should receive', \
                  (item * 12))
            index += 1
    

    

# Call the main function.
main()
