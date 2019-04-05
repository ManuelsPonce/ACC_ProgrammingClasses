# This program demonstrates the in operator
# used with a list.

def main():

    #Declare Variables
    length = 0
    search = 0
    index = 0
    
    # Create a list of product numbers.
    prod_nums = ['V475', 'F987', 'Q143', 'R688']

    length = len(prod_nums)
    print("lengh = ", length)
    print(prod_nums)

    print("The last items is: ", prod_nums[len(prod_nums)-1])

    prod_nums[0] = 5

    prod_nums = prod_nums + [4] + ['Hello'] + ['3']

    print("The last items is: ", prod_nums[len(prod_nums)-1])
    
##    for index in range(length):
    for index in [-1, 0, 1, 2, 3, 4, 5]:
        
        print("[", index, "]", prod_nums[index])
    
    #end for

    # Get a product number to search for.
    search = input('Enter a product number: ')

    # Determine whether the product number is in the list.
    if search in prod_nums:
        
        print(search, 'was found in the list.')
        
    else:
        
        print(search, 'was not found in the list.')

    #end if
        
# Call the main function.
main()

    
