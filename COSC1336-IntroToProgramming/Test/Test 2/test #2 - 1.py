# Calculates average
def calc_average(test_score1, test_score2, test_score3, test_score4, test_score5):
    average = (test_score1+test_score2+test_score3+test_score4+test_score5)/5
    return int(average)

# Determines grade (Converts score to grade)
def determine_grade(test_score):
    if test_score >= 90 and test_score <= 100:
        test_grade = 'A'
    elif test_score >= 80 and test_score < 90:
        test_grade = 'B'
    elif test_score >= 70 and test_score < 80:
        test_grade = 'C'
    elif test_score >= 60 and test_score < 70:
        test_grade = 'D'
    else:
        test_grade = 'F'

    return test_grade

# Main function
def main():

    # Prompt user to enter test scores
    score1 = int(input('Enter test score 1: '))
    score2 = int(input('Enter test score 2: '))
    score3 = int(input('Enter test score 3: '))
    score4 = int(input('Enter test score 4: '))
    score5 = int(input('Enter test score 5: '))

    # Determine grades
    grade1 = determine_grade(score1)
    grade2 = determine_grade(score2)
    grade3 = determine_grade(score3)
    grade4 = determine_grade(score4)
    grade5 = determine_grade(score5)

    # Determine class average
    average_score = calc_average(score1, score2, score3, score4, score5)
    average_grade = determine_grade(average_score)

    # Show results
    print()
    print('For test score 1, grade is', grade1)
    print('For test score 2, grade is', grade2)
    print('For test score 3, grade is', grade3)
    print('For test score 4, grade is', grade4)
    print('For test score 5, grade is', grade5)
    print()
    print('Class average test score is', average_score, 'which is a grade of', average_grade)

# Call the main function
main()
