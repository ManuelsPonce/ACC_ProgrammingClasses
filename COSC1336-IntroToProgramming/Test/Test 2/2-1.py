def main():
    try:
        numGrade1=float(input('Enter first grade: '))                  #ASKS USER FOR 5 GRADES
        numGrade2=float(input('Enter second grade: '))
        numGrade3=float(input('Enter third grade: '))
        numGrade4=float(input('Enter fourth grade: '))
        numGrade5=float(input('Enter fifth grade: '))
        print('The average test score is: ', calc_average(numGrade1, numGrade2, numGrade3, numGrade4, numGrade5))  #SENDS GRADES TO calc_average()
        determine_grade(numGrade1)
        print('Student one got a:   ',determine_grade(numGrade1)) # PRINTS THE LETTER SCORE BY SENDING GRADES TO determine_grade()
        print('Student two got a:   ',determine_grade(numGrade2))
        print('Student three got a: ',determine_grade(numGrade3))
        print('Student four got a:  ',determine_grade(numGrade4))
        print('Student five got a:  ',determine_grade(numGrade5))

        
        
        
    except ValueError:                         #IF THERE IS A ERROR WITH USER PUTTING WRONG VALUE THIS WILL DISPLAY
        print("Non-numerical value error. Use digits and '.'.")
    except:                                    #IF THERE IS ANY OTHER ERROR THIS WILL DISPLAY
        print('An error occured.')

def calc_average(a,b,c,d,e): 
    return(a+b+c+d+e)/5    #RETURNS AN AVERAGE OF THE GRADE
    
def determine_grade(g):
    if g>90:               #USES LOGIC TO FIT THE NUMBER INTO A RANGE AND DETERMINE LETTER SCORE
        return 'A'
    elif g>80:
        return 'B'
    elif g>70:
        return 'C'
    elif g>60:
        return 'D'
    elif g<60:
        return 'F'


main()
    
