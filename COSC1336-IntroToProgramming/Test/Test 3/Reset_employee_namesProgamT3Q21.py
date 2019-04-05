# This program resets the employee_names.txt file to its original state.
# To be used in conjunction with Test3 Question 21.

def main():
    # Writing over file.
    nameFile = open('employee_names.txt', 'w')

    # Writing employee names back to original state.
    nameFile.write("George Thomas\n")
    nameFile.write("Melinda Harris\n")
    nameFile.write("Norah Jeddery\n")
    nameFile.write("Jorge Ortiz\n")
    nameFile.write("Samantha Gregory\n")
    nameFile.write("Tanvi Gupta\n")
    nameFile.write("William Edwards\n")
    nameFile.write("Tania Gomez\n")
    nameFile.write("Erica Sanders\n")
    nameFile.write("Gracie Lou Freebush\n")
    nameFile.write("Tony Montana\n")
    nameFile.write("Obi-Wan Kenobi\n")
    nameFile.write("Cruella De Vil\n")
    nameFile.write("Marty McFly\n")
    nameFile.write("Napoleon Dynamite\n")

# Call the main function.
main()
