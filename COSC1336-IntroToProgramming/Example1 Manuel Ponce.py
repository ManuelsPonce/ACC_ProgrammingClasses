##// get the minutes
##Display "Enter the number of excess minutes."
#print("Enter the number of excess minutes.")

##Input excessMinutes
#excessMinutes = input()
#excessMinutes = float(excessMinutes)

excessMinutes = float(input("Enter the number of excess minutes. "))

##
##//Calculate the fee
##Set overageFee = excessMinutes * 0.35
##
overageFee = excessMinutes * 0.35

##//Show the result
##Display "Your current overage fee is $", overageFee
print("Your current overage fee is $", overageFee)
