//I could not figure out why my program would not exit the loop when the user entered 
// zero in both functions

#include <iostream>
#include <fstream>

using namespace std;

//function prototype
void evenOdd(),
	primeNumber();
bool isEven(int),
	 isPrime(int);

int main()
{

// Variable Declarations
int mainMenuOption,
	mathBreakOption,
	mathMenuChoice;
	
	cout << "---Main Menu---\n";
	cout << "1. Math Break \n";
	cout << "2. Quit \n";
	cout << "please pick an option: ";
	cin >> mainMenuOption;
	
	while((mainMenuOption < 1) || (mainMenuOption > 2))
	{
		cout << "Please enter valid option. ";
		cin >> mainMenuOption; 
	}
	
	while (mainMenuOption != 2)
	{		
		cout << endl;
		cout << "Beginning the Math Break\n";
		cout << "1. Even or Odd\n";
		cout << "2. Prime Number\n";
		cout << "3. To quit the Math Break\n";
		cout << "Please pick an option: ";
	
		cin >> mathBreakOption;	
		
		while (mathBreakOption != 3)
		{	
			while ((mathBreakOption < 1) || (mathBreakOption >= 4))
			{
				cout << "Please enter valid option.(3 to quit) ";
				cin >> mathBreakOption;
			}
				
			if (mathBreakOption == 1)
				evenOdd();
			
			else
				primeNumber();
		
		}
	cout << "Ending Math Break\n";\
	
	cout << endl;
	cout << "---Main Menu---\n";
	cout << "1. Math Break \n";
	cout << "2. Quit \n";
	cout << "please pick an option: ";
	cin >> mainMenuOption;
	
	while((mainMenuOption < 1) || (mainMenuOption > 2))
	{
		cout << "Please enter valid option. ";
		cin >> mainMenuOption; 
	}
	}
	cout << "Ending program";

return 0;
}


/************************************************************/
/* Function:   evenOdd                                      */
/* Inputs:     integer to test                              */
/* Outputs:    1 if prime, 0 if not prime                   */
/* Purpose:     Promps and validates user inpup             */
/*               And teels weather its even or odd          */
/************************************************************/
void evenOdd()
{
	int oddEvenInteger;
	
	cout << endl;
	cout << "---Odd or Even---\n";
	cout << "Plese enter an integer greater than zero\n";
	cout << "to see if it is Odd or Even: ";
	cin >> oddEvenInteger;

	while (oddEvenInteger < 0)
	//CHANGE TO FIX THAT ZERO EXITS THE GAME
	{
		cout << "Please enter a valid integer or Zero to quit: ";
		cin >> oddEvenInteger;
	}
		if (isEven(oddEvenInteger))
			cout << oddEvenInteger << " is Even\n" << endl;
	
		else
			cout << oddEvenInteger << " is Odd\n" << endl;
}


/**************************************************************/
/* Function:   isEven                                         */
/* Inputs:     user integer                                   */
/* Outputs:    1 if Odd, 0 if  Even                           */
/* Purpose:    This function determines if it is odd or Even. */     
/**************************************************************/
bool isEven(int number)
{
	bool oddEvenAnswer;
	
	if (number % 2 == 0) 
		oddEvenAnswer = true;	
	else 
		oddEvenAnswer = false;	
		
	return oddEvenAnswer;
}


/************************************************************/
/* Function:   PrimeNumber                                  */
/* Inputs:     integer to test                              */
/* Outputs:    Displays if number is prime or not           */
/* Purpose:     Promps and validates user inpup             */
/*               And teels weather its prime or not         */
/************************************************************/
void primeNumber()
{
	int primeInteger;
	
	cout << endl;
	cout << "---Prime---\n";
	cout << "Please enter an integer larger than zero to see if it is prime: ";
	cin >> primeInteger;

	while (primeInteger != 0)
	//CHANGE TO FIX THAT ZERO EXITS THE GAME
	{
		
		while (primeInteger <= -1)
		{
		cout << "Please enter a valid integer greater than zero\n";
		cout << "or zero to quit: ";
		cin >> primeInteger;
		}

	if (isPrime(primeInteger))	
		cout << primeInteger << " is prime\n" << endl;

	else									
		cout << primeInteger << " is not prime\n" << endl;
		
	cout << endl;
	cout << "---Prime---\n";
	cout << "Please enter an integer larger than zero to see if it is prime: ";
	cin >> primeInteger;
}
}


/************************************************************/
/* Function:   isPrime                                      */
/* Inputs:     integer to test                              */
/* Outputs:    1 if prime, 0 if not prime                   */
/* Purpose:    This function takes one integer input        */
/*                  and determines if it is prime or not.   */
/************************************************************/
bool isPrime (int number)
{
	bool primeAnswer;
	int primeDivisor;
	
	for (primeDivisor = 2; primeDivisor < number; primeDivisor++)
	{
		if (number % primeDivisor == 0)
			primeAnswer = false;
			
		else 
			primeAnswer = true;

		return primeAnswer;
	}
}
