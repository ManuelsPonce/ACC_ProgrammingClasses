# Program OverageFee
# Description: 
#  This program calculates the cost of using more than the alloted
#  minutes per month of a telephone use contract (overage fees)
# Author: Manuel Ponce 
# Date: September 20 2016
# Revised: 
# 	<revision date> 
#
# list libraries used
#
# Declare global constants
OVERAGE_RATE = 0.35

#Main Program
def main():

#   Declare variables
    excessMinutes = 0
    overageFee = 0.0

#    1.Get the number of excess minutes as input
    excessMinutes = int(input("Enter the number of excess minutes."))
    print("The number of excess minutes is", excessMinutes)		
		
#   2.Calculate the overage fee by
#     multiplying the number of excess minutes by OVERAGE_RATE.
    overageFee = excessMinutes * OVERAGE_RATE

#    3.Display the overage fee.
    print("Your overgage Fee is $", overageFee, sep = '')

#End Program
    
main()


