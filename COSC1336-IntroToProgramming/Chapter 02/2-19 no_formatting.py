# This program demonstrates how a floating-point
# number is displayed with no formatting.
amount_due = 5000.0
monthly_payment = amount_due / 12
#per_cent = amount_due * 75\%
print('The monthly payment is', monthly_payment)
print('The monthly payment\' is', monthly_payment, sep = '')
print('The monthly payment is $', monthly_payment)
print('The monthly payment is $', monthly_payment, sep = '')
print('The monthly payment is $' + "456")
print('The\t monthly\n payment is $' + str(monthly_payment))
print(format(amount_due, '3,.0f'))
input("Press any key")



