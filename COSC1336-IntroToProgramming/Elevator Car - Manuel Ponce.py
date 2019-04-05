# Program The Elevator Car 
# Description: 
#   Ths Program simulate the operation of an elevator moving from the
#   first to the 15th floor with people getting on and off.
# Author: Manuel Ponce 
# Date: 9/28/2016
# Revised:


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
    gettingOn14 = 5

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
    Display “ding”
    Display “First floor”
    Display "Passengers gettin off: " gettingOff1
    Display "passengers getting on: " gettinOn1
    Set passengers = passengers – gettingOff1
    Set passengers = passengers + gettingOn1
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1

	
#   at floor two
    Display “ding”
    Display “Second floor”
    Display "Passengers gettin off: " gettingOff2
    Display "passengers getting on: " gettinOn2
    Set passengers = passengers – gettingOff2
    Set passengers = passengers + gettingOn2
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1

	
#   at floor three
    Display “ding”
    Display “Third floor”
    Display "Passengers gettin off: " gettingOff3
    Display "passengers getting on: " gettinOn3
    Set passengers = passengers – gettingOff3
    Set passengers = passengers + gettingOn3
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1

	
#   at floor four
    Display “ding”
    Display “Fourth floor”
    Display "Passengers gettin off: " gettingOff4
    Display "passengers getting on: " gettinOn4
    Set passengers = passengers – gettingOff4
    Set passengers = passengers + gettingOn4
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1

	
#   at floor five
    Display “ding”
    Display “Fifth floor”
    Display "Passengers gettin off: " gettingOff5
    Display "passengers getting on: " gettinOn5
    Set passengers = passengers – gettingOff5
    Set passengers = passengers + gettingOn5
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
	
	
#   at floor six
    Display “ding”
    Display “Sixth floor”
    Display "Passengers gettin off: " gettingOff6
    Display "passengers getting on: " gettinOn6
    Set passengers = passengers – gettingOff6
    Set passengers = passengers + gettingOn6
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
    
#   at floor seven
    Display “ding”
    Display “Seventh floor”
    Display "Passengers gettin off: " gettingOff7
    Display "passengers getting on: " gettinOn7
    Set passengers = passengers – gettingOff7
    Set passengers = passengers + gettingOn7
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
#   at floor eigth
    Display “ding”
    Display “Eighth floor”
    Display "Passengers gettin off: " gettingOff8
    Display "passengers getting on: " gettinOn8
    Set passengers = passengers – gettingOff8
    Set passengers = passengers + gettingOn8
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
    
#   at floor nine
    Display “ding”
    Display “Ninth floor”
    Display "Passengers gettin off: " gettingOff19
    Display "passengers getting on: " gettinOn9
    Set passengers = passengers – gettingOff9
    Set passengers = passengers + gettingOn9
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
    
#   at floor ten
    Display “ding”
    Display “Tenth floor”
    Display "Passengers gettin off: " gettingOff10
    Display "passengers getting on: " gettinOn10
    Set passengers = passengers – gettingOff10
    Set passengers = passengers + gettingOn10
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
    
#   at floor eleven
    Display “ding”
    Display “eleventh floor”
    Display "Passengers gettin off: " gettingOff11
    Display "passengers getting on: " gettinOn11
    Set passengers = passengers – gettingOff11
    Set passengers = passengers + gettingOn11
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
    
#   at floor twelve
    Display “ding”
    Display “Twelfth floor”
    Display "Passengers gettin off: " gettingOff12
    Display "passengers getting on: " gettinOn12
    Set passengers = passengers – gettingOff12
    Set passengers = passengers + gettingOn12
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 2
    
#   at floor fourteen
    Display “ding”
    Display “Fourteenth floor”
    Display "Passengers gettin off: " gettingOff14
    Display "passengers getting on: " gettinOn14
    Set passengers = passengers – gettingOff14
    Set passengers = passengers + gettingOn14
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
    
#   at floor fifteen
    Display “ding”
    Display “Fifteenth floor”
    Display "Passengers gettin off: " gettingOff15
    Display "passengers getting on: " gettinOn15
    Set passengers = passengers – gettingOff15
    Set passengers = passengers + gettingOn15
    Display "Total number of people in elevator: " passengers
    Set floor = floor + 1
	
#End Program

main()

