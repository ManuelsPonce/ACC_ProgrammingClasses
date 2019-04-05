#Defining Main
def main():

    test1, test2, test3, test4, test5 = get_scores()
    
    #Determine the letter grade for each test score
    letterGrade1 = determine_grade(test1)
    letterGrade2 = determine_grade(test2)
    letterGrade3 = determine_grade(test3)
    letterGrade4 = determine_grade(test4)
    letterGrade5 = determine_grade(test5)

    #Determine the average test score
    avgTestScore = calc_average(test1, test2, test3, test4, test5)

    #Display Letter Grades for each test and the average test score
    print("**********Grades**********")
    print("Test1: ", letterGrade1, format(test1, '.2f'))
    print("Test2: ", letterGrade2, format(test2, '.2f'))
    print("Test3: ", letterGrade3, format(test3, '.2f'))
    print("Test4: ", letterGrade4, format(test4, '.2f'))
    print("Test5: ", letterGrade5, format(test5, '.2f'))
    print("Avg Test Score: ", format(avgTestScore, '.2f'))

#Accepts Five Test scores and returns the average of the scores
def calc_average(test1, test2, test3, test4, test5):
    avgScore = ((test1 + test2 + test3 + test4 + test5) / 5)    
    return avgScore

#Accepts a test score and returns a letter grade for the score based on grading scale
def determine_grade(testScore):
    if testScore >= 90 and testScore <= 100:
        letterGrade = "A"
    elif testScore >= 80 and testScore <= 89:
        letterGrade = "B"
    elif testScore >= 70 and testScore <= 79:
        letterGrade = "C"
    elif testScore >= 60 and testScore <= 69:
        letterGrade = "D"
    else:
        letterGrade = "F"

    return letterGrade
    
#Gets test scores from user
def get_scores():
    try:
        test1 = float(input("Please Enter a score for Test#1: "))
        test2 = float(input("Please Enter a score for Test#2: "))
        test3 = float(input("Please Enter a score for Test#3: "))
        test4 = float(input("Please Enter a score for Test#4: "))
        test5 = float(input("Please Enter a score for Test#5: "))
        return test1, test2, test3, test4, test5
    except ValueError:
        print("You did not enter a valid test score, please try again.")
        test1, test2, test3, test4, test5 = get_scores()
        return test1, test2, test3, test4, test5
    
#Call Main Function
main()
