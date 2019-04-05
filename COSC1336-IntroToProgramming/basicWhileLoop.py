# Program basicLoop
# Description: 
# 	A basic example of a While loop
# Author: Manuel Ponce
# Date: 10/4/2016
# Revised: 
# 	10/6/2016 

# list libraries used

# Declare global constants
LIMIT = 10

#Main Program
def main():
    # Declare variables
    stayInLoop = True
    value = 0
    pause = ""

    #set up loop
    stayInLoop = (value < LIMIT)
    value = 0 

    while (stayInLoop):

        print("Value is ", value)

        if (value == 0):

            print("Just starting the loop")

        elif (value == 1):

            print("finished one loop")

        elif (value == 5):

            print("finished five loops")
                    
        elif (value >= LIMIT):
        
            print("This should not happen")

        else:

            print("Still looping")

#       End If


        value = value + 1
        stayInLoop = (value < LIMIT)

    #End While
	
    print("After the loop", value)

    pause = input("Press enter to continue")
    

#End While

#End Program

main()
