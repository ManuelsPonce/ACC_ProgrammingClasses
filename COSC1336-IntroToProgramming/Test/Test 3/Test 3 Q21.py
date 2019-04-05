#Sets Global variables of wage and OT multiplier
HOUR_PAY=12.00
OVER_TIME=1.50

#Sets global dimensions for display table
NAME_WIDTH=20
PAY_WIDTH=NAME_WIDTH-1

def main():

    dummy=input()
    emp_names=open('employee_names.txt','r')
    names=[]
    hours=[]
    employee_data=[]
    count=0
    #I still don't like to comment
    print('PLEASE READ: I want to thank you for being such a great professor. It has been a pleasure being your student and would recomend your class to anyone trying to actualy learn',
'                                   Press Any Key To Continue.....')
    
#Creates a list out of file
    for line in emp_names:
        temp_name=str(line)
        names.append(temp_name.rstrip())
        temp_hour=''
        while temp_hour == '':
            temp_hour=(input('Enter the number of hours worked by '+names[count]+': '))
        hours.append(int(temp_hour))
        employee_data.append(names[count])
        employee_data.append(hours[count])
        count+=1
    emp_names.close()
    storeBack(names, hours)
    gross_pay=grossPay(hours)
    setTableWidth(names)
    displayPay(names,gross_pay)

#limit so if one of the names is to big, the table will not malfunction
def setTableWidth(n):
    length=0
    for name in n:
        if len(name)>length:
            length+=len(name)

    return length


#Displays the data in nice table or crappy "safe-mode"   
def displayPay(names,pay):
    if setTableWidth(names)>=NAME_WIDTH:
        count=0
        print('\n','\n','\n','\n','\n','\n','\n',)
        print('_'*(2*NAME_WIDTH+4))
        print(' '*(2*NAME_WIDTH+4))
        print('|Name:               |','Gross Pay:          |')
        print('_'*(2*NAME_WIDTH+4))
        for name in names:
            name_temp= str(name)
            pay_temp=str(pay[count])
            pay_temp=pay_temp+'0'
            if len(name_temp)<NAME_WIDTH:
                while len(name_temp)!=NAME_WIDTH:
                    name_temp=name_temp+' '
                name_temp=name_temp+'|$'    
            if len(pay_temp)<PAY_WIDTH:
                while len(pay_temp)!=PAY_WIDTH:
                    pay_temp=' '+pay_temp
                pay_temp=pay_temp+'|'
            print('|'+name_temp,pay_temp)
            count+=1
        print('_'*(2*NAME_WIDTH+4))
    else:
        count=0
        for name in names:
            pay_temp=str(pay[count])
            pay_temp='$'+pay_temp+'0'
            print(name+':', pay_temp)
            count+=1
        

#stores stuff back into file
def storeBack(n,h):
    infile=open('employee_names.txt','w')
    count1=0
    for x in n:
        infile.write(x)
        infile.write('\n')
        infile.write(str(h[count1]))
        infile.write('\n')
        count1+=1
    infile.close()
#calculates gross pay               
def grossPay(h):
    gross=[]
    for time in h:
        if time<=40:
            gross_temp=time*HOUR_PAY
        else:
            gross_temp=40*HOUR_PAY+(time-40)*OVER_TIME*HOUR_PAY
        gross.append(gross_temp)
    return gross
        
            
        



main()
