# This will determine and calculate shipping rates

def main():
    
    # call function
    package_weight()
    
# Define function
def package_weight():
    
    #prompt user for weight of package
    weight = float(input('Enter package weight: '))

    #display weight
    print('Weight of package: ', weight, 'lbs.')
    # call function
    rates(weight)

# define function
def rates(weight):
    # variable
    shipping_rate = 0
    # determing shipping rate
    if weight < 2:
        shipping_rate = weight * 1.10
        print('Shipping rate: $', format(shipping_rate, ',.2f'), \
              sep='')
    elif weight > 2 and weight < 6:
        shipping_rate = weight * 2.20
        print('Shipping rate: $', format(shipping_rate, ',.2f'), \
              sep='')
    elif weight > 6 and weight < 10:
        shipping_rat = weight * 3.70
        print('Shipping rate: $', format(shipping_rate, ',.2f'), \
              sep='')
    else:
        shipping_rate = weight * 3.80
        print('Shipping rate: $', format(shipping_rate, ',.2f'), \
              sep='')
main()



    
