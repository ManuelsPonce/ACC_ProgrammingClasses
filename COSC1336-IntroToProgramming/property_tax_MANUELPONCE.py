# Program property_tax
# Description: 
# This program displays property taxes.
# Author: Carl Gregory 
# Date: 13 October 2016
# Revised: 
# 	<revision date> 

# list libraries used

# Declare global constants
#Constant Integer STOP_LOOP = 0

TAX_FACTOR = 0.0065
STOP_LOOP = -1

#Main Program
def main():

    # Declare variables
    #Integer lot = 0
    lot = 0

    # Set up loop
    # Get the first lot number.
    print('Enter the property lot number')
    print('or enter ', STOP_LOOP, ' to end.')
    lot = int(input('Lot number: '))

    # Continue processing as long as the user
    # does not enter lot number STOP_LOOP.
    while (lot != STOP_LOOP):
        
        # Get the property value.
        value = float(input('Enter the property value: '))

        # Calculate the property's tax.
        tax = value * TAX_FACTOR

        # Display the tax.
        print('Property tax: $', format(tax, ',.2f'), sep='')

        # Get the next lot number.
        print('Enter the next lot number or')
        print('or enter ', STOP_LOOP,' to end.')
        lot = int(input('Lot number: '))

    #End While

#End Program

main()
