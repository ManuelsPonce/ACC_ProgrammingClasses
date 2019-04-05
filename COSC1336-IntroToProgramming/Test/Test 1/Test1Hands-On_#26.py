#Sales Tax problem (#26)

#==Global variables==

#County tax rate
COUNTY_TAX_RATE = .02
#State tax rate
STATE_TAX_RATE = .04

def main():

    #Get monthly sales
    sales = float(input('Please enter your monthly sales, for tax purposes: '))

    #Preevaluation loop to make sure the input isn't garbage
    while sales <= 0:
        print('Your input is an incorrect amount. Please try again.')
        sales = float(input('Please enter your monthly sales, for tax purposes: '))
        
    #Calculate county sales tax
    county_tax = sales * COUNTY_TAX_RATE

    print('Your tax due to the county is:', format(county_tax, ',.2f'))

    #Calculate state sales tax
    state_tax = sales * STATE_TAX_RATE

    print('Your tax due to the state is:', format(state_tax, ',.2f'))

    #Add the two taxes together for total tax
    total_tax = state_tax + county_tax
    
    print('Your total tax due is:', format(total_tax, ',.2f'))


main()
