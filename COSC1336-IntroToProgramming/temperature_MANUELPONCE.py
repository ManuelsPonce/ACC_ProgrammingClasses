#Program Temperature 
#Description: 
#This program assists a technician in the process
#of checking a substance's temperature. 
#Author: Manuel Ponce 
#Date: 10/13/2016
#Revised: 
# 	<revision date> 

#list libraries used

#Declare global constants
MAX_TEMP = 102.5

#Main Program
def main():
    #Declare variables
    #Decimal temperature = 0.0
    temperature = 0.0

    #Set up loop
    #Get the substance's temperature.
    temperature = float(input("Enter the substance's Celsius temperature: "))

    #As long as necessary, instruct the user to
    #adjust the thermostat.
    while (temperature > MAX_TEMP):
        
        print('The temperature is too high.')
        print('Turn the thermostat down and wait')
        print('5 minutes. Then take the temperature')
        print('again and enter it.')
    
        temperature = float(input('Enter the new Celsius temperature: '))

    #End While

    #Remind the user to check the temperature again
    #in 15 minutes.
    print('The temperature is acceptable.')
    print('Check it again in 15 minutes.')

#End Program

main()



