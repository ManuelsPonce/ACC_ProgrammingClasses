# Program The Elevator Car 
# Description: 
#   Ths Program simulate the operation of an elevator moving from the
#   first to the 15th floor with people getting on and off.
# Author: Manuel Ponce 
# Date: 9/28/2016
# Revised:
#       9/29/2016


# list libraries used

# Declare global constants

ELEVATOR_CAPACITY = 20

#Main Program
def main():

#   Declare variables

    passengers = 0
    floor = 1

    gettingOff1 = 0
    gettingOn1 = 15

    gettingOff2 = 7
    gettingOn2 = 2
	
    gettingOff3 = 2
    gettingOn3 = 3

    gettingOff4 = 5
    gettingOn4 = 5

    gettingOff5 = 3
    gettingOn5 = 10

    gettingOff6 = 0
    gettingOn6 = 2

    gettingOff7 = 0
    gettingOn7 = 0

    gettingOff8 = 3
    gettingOn8 = 0

    gettingOff9 = 0 
    gettingOn9 = 2

    gettingOff10 = 4
    gettingOn10 = 5

    gettingOff11 = 5
    gettingOn11 = 0

    gettingOff12 = 3
    gettingOn12 = 6

    gettingOff14 = 17
    gettingOn14 = 1

    gettingOff15 = 2
    gettingOn15 = 0

	
#   at floor one
    print("Ding")
    print("First floor")
    print("Passengers getting off:", gettingOff1)
    print("Passengers getting on: ", gettingOn1)
    passengers =  passengers + gettingOn1 - gettingOff1
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1

	
#   at floor two
    print("Ding")
    print("Second floor")
    print("Passengers getting off:", gettingOff2)
    print("Passengers getting on: ", gettingOn2)
    passengers = passengers + gettingOn2 - gettingOff2
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1

	
#   at floor three
    print("Ding")
    print("Third floor")
    print("Passengers getting off:", gettingOff3)
    print("Passengers getting on: ", gettingOn3)
    passengers = passengers + gettingOn3 - gettingOff3
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
    

#   at floor four
    print("Ding")
    print("Fourth floor")
    print("Passengers getting off:", gettingOff4)
    print("Passengers getting on: ", gettingOn4)
    passengers = passengers + gettingOn4 - gettingOff4
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1

	
#   at floor five
    print("Ding")
    print("Fith floor")
    print("Passengers getting off:", gettingOff5)
    print("Passengers getting on: ", gettingOn5)
    passengers = passengers + gettingOn5 - gettingOff5
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
	
	
#   at floor six
    print("Ding")
    print("Six floor")
    print("Passengers getting off:", gettingOff6)
    print("Passengers getting on: ", gettingOn6)
    passengers = passengers + gettingOn6 - gettingOff6
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
    
    
#   at floor seven
    print("Ding")
    print("Seventh floor")
    print("Passengers getting off:", gettingOff7)
    print("Passengers getting on: ", gettingOn7)
    passengers = passengers + gettingOn7 - gettingOff7
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1

    
#   at floor eigth
    print("Ding")
    print("Eighth floor")
    print("Passengers getting off:", gettingOff8)
    print("Passengers getting on: ", gettingOn8)
    passengers = passengers + gettingOn8 - gettingOff8
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
    
    
#   at floor nine
    print("Ding")
    print("Ninth floor")
    print("Passengers getting off:", gettingOff9)
    print("Passengers getting on: ", gettingOn9)
    passengers = passengers + gettingOn9 - gettingOff9
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
    
    
#   at floor ten
    print("Ding")
    print("Tenth floor")
    print("Passengers getting off:", gettingOff10)
    print("Passengers getting on: ", gettingOn10)
    passengers = passengers + gettingOn10 - gettingOff10
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
    
    
#   at floor eleven
    print("Ding")
    print("Eleventh floor")
    print("Passengers getting off:", gettingOff11)
    print("Passengers getting on: ", gettingOn11)
    passengers = passengers + gettingOn11 - gettingOff11
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1
    
    
#   at floor twelve
    print("Ding")
    print("Twelfth floor")
    print("Passengers getting off:", gettingOff12)
    print("Passengers getting on: ", gettingOn12)
    passengers = passengers + gettingOn12 - gettingOff12
    print("Total number of people in elevator: ", passengers)
    floor = floor + 2

    
#   at floor fourteen
    print("Ding")
    print("Fourteenth floor")
    print("Passengers getting off:", gettingOff14)
    print("Passengers getting on: ", gettingOn14)
    passengers = passengers + gettingOn14 - gettingOff14
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1

    
#   at floor fifteen
    print("Ding")
    print("Fifteenth floor")
    print("Passengers getting off:", gettingOff15)
    print("Passengers getting on: ", gettingOn15)
    passengers = passengers + gettingOn15 - gettingOff15
    print("Total number of people in elevator: ", passengers)
    floor = floor + 1

	
#End Program

main()

# NOTES ASK ABOUT!
#   if passengers > ELEVATOR_CAPACITY:
#   print("Capicity reached. Max of 20 people at a time.")
#   end if

