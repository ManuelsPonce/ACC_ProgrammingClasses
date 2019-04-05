#include <iostream>
#include <fstream>

using namespace std;


bool isEven(int);
int main()
{

	int oddEvenInteger;
	bool oddEvenAnswer;

	cout << endl;
	cout << "Plese enter a integer to see if it is Odd or Even: ";
	cin >> oddEvenInteger;
		
	//isEven(oddEvenInteger);  // checks is the number is even or odd then displays the outcome
	
	isEven(oddEvenInteger);
	
	if (oddEvenAnswer == false)
	{
		cout << oddEvenInteger << " is Odd" << endl;
	}
	else
	{
		cout << oddEvenInteger << " is Even" << endl;
	}

return 0;
}



/**********************************************************/
/* Function:   evenOdd                                    */
/* Inputs:     integer to test                            */
/* Outputs:    1 if Odd, 0 if  Even                       */
/* Purpose:    This function takes one integer input      */
/*             and determines if it is odd or Even.       */
/**********************************************************/

bool isEven(int number)
{
	bool oddEvenAnswer;
	int oddEvenNum;
	
	if (number % 2 == 0) 
		{
		oddEvenAnswer = false;
		}
		
	else 
		{
		oddEvenAnswer = true;
		}	
		
	return oddEvenAnswer;
	
}



