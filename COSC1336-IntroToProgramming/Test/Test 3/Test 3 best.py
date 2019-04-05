employ = open('employee_names.txt', 'r')
names = []
num = 0
while num < 15:
    names.append(employ.readline())
    num += 1
employ.close()
num = 0
wage = []
hours = 0

employ = open('employee_names.txt', 'w')
while num < 15:
    employ.write(names[num])
    print()
    print(names[num].strip('\n'))
    hours = str(input("Enter hours the employee worked: "))
    wage.append(hours)
    employ.write(hours + '\n')
    num += 1
employ.close()

num = 0
while num < 15:
    print()
    print('Employee:',names[num].strip('\n'))
    print('Hours worked:',wage[num])
    if int(wage[num]) <= 40:
        print('Gross pay: $', int(wage[num]) * 12)
    else:
        hours = int(wage[num]) - 40
        print('Gross pay: $', (int(wage[num]) - hours) * 12 + hours * 18)
    num +=1
