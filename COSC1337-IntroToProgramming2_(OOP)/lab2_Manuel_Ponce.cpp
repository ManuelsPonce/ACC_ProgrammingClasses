//*****************************************//
//			Masnuel Ponce				   //
//	   		Lab 3	    				   //									
//*****************************************//


#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>

using namespace std;


//CD  Class Decleration 
class CD
{
	private:
		string artist;
		string title;
		int year;
		
	public:
		
		//Mutators
		void setArtist(string);
		void setTitle(string);
		void setYear(int);
		
		//Accessors
		string getArtist();
		string getTitle();
		int getYear();
		
		
		
};

void CD::setArtist(string a)
{
	artist = a;
}

void CD::setTitle(string t)
{
	title = t;
}

void CD::setYear(int y)
{
	year = y;
}

string CD::getArtist()
{
	return artist;
}

string CD::getTitle()
{
	return title;
}

int CD::getYear()
{
	return year;
}

/***************************************/
/*   Function: displayCD_values()      */
/* sets the values set in  CD class    */
/***************************************/
void testCD()
{
	CD album;
	
	album.setArtist("Daft Punk");
	album.setTitle("Da Funk");
	album.setYear(1997);
	
	cout << "***Test CD***" << endl;
	cout  << "Artist: " << album.getArtist() << endl;
	cout  << "Title: " << album.getTitle() << endl;
	cout << "Year Released: " << album.getYear() << endl;
}




/**********************/
//function prototypes
void evenOdd(),
	primeNumber(),
	mathBreak();
int isEven(int),
	 isPrime(int);
int mainMenuOption(),
	mathBreakOption(),
	getValidNum();
void testCD();

int main()
{

	// Variable Declarations
	int option;	
	
	option = mainMenuOption();
	
	while(option != 3)
	{
		switch (option)
		{
			case 1:
				testCD();
				break;
			case 2:
				mathBreak();
				break;
		}
		
		option = mainMenuOption();
	}
	
	cout << "Ending program";

return 0;
}


/*****************************************************/
/* Function:   mainMenuOption                        */
/* Inputs:     none                                  */
/* Outputs:    a valid user option                   */
/* Purpose:    This function displays a menu, reads  */
/*             the user's option, validates          */
/*             and returns it.                       */
/*****************************************************/
int mainMenuOption()
{
	int option;
	
	do
	{
		cout << endl;
		cout << "---Main Menu---\n";
		cout << "1. Display Test CD \n";
		cout << "2. Math Break \n";
		cout << "3. Quit \n";
		cout << "please pick an option: ";
		cin >> option;
		
		if ((option < 1) || (option > 3))
		cout << "Invalid option\n";
		
	}while((option < 1) || (option > 3));
	
	return option;
}

/*****************************************************/
/* Function:   MathBreakOption                       */
/* Inputs:     none                                  */
/* Outputs:    a valid user option                   */
/* Purpose:    This function displays a menu, reads  */
/*             the user's option, validates          */
/*             and returns it.                       */
/*****************************************************/
int mathBreakOption()
{
	int option;
	
	do
	{
		cout << endl;
		cout << "Beginning the Math Break\n";
		cout << "1. Even or Odd\n";
		cout << "2. Prime Number\n";
		cout << "3. To quit the Math Break\n";
		cout << "Please pick an option: ";
		cin >> option;
		
		if ((option < 1) || (option > 3))
			cout << "Invalid option\n\n";
		
	}while((option < 1) || (option > 3));
		
	return option;
}


/*****************************************************/
/* Function:   mathBreak                             */
/* Inputs:     none                                  */
/* Outputs:    none                                  */
/* Purpose:    This function displays a menu, reads  */
/*             the user's option and plays the game. */
/*****************************************************/
void mathBreak()
{
	int option;
	
	option = mathBreakOption();
	
	while(option != 3)
	{
		switch(option)
		{
			case 1:
				evenOdd();
			case 2:
				primeNumber();
				break;
		}
		option = mathBreakOption();
			
	}
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
	
	oddEvenInteger = getValidNum();

	while (oddEvenInteger > 0)
	{
		if (isEven(oddEvenInteger))
			cout << oddEvenInteger << " is Even\n" << endl;
	
		else
			cout << oddEvenInteger << " is Odd\n" << endl;
		
		oddEvenInteger = getValidNum();
	}
}


/**************************************************************/
/* Function:   isEven                                         */
/* Inputs:     user integer                                   */
/* Outputs:    1 if Odd, 0 if  Even                           */
/* Purpose:    This function determines if it is odd or Even. */     
/**************************************************************/
int isEven(int number)
{
	// return 1(true) if number is even
	// or 0(false) if the number is odd
	return !(number % 2);
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
	primeInteger = getValidNum();

	while (primeInteger > 0)
	{
		if (primeInteger == 1)
			cout << "Prime numbers begin after 2\n";
			
		else if (isPrime(primeInteger))	
			cout << primeInteger << " is prime\n" << endl;
	
		else									
			cout << primeInteger << " is not prime\n" << endl;
			
		primeInteger = getValidNum();
	}
}


/************************************************************/
/* Function:   isPrime                                      */
/* Inputs:     integer to test                              */
/* Outputs:    1 if prime, 0 if not prime                   */
/* Purpose:    This function takes one integer input        */
/*                  and determines if it is prime or not.   */
/************************************************************/
int isPrime (int number)
{
	
	int primeDivisor,
		primeLimit;
		
	primeLimit = sqrt(number) + 1;
	
	for (primeDivisor = 2; (primeDivisor < number) && (number % primeDivisor); primeDivisor++)
		return !(primeDivisor < primeLimit);
}


/*****************************************************/
/* Function:   getValidNum                           */
/* Inputs:     none                                  */
/* Outputs:    a positive integer                    */
/* Purpose:    This function returns a positive      */
/*             integer > 0                           */
/*****************************************************/
int getValidNum()
{
	int num;
	
    cout << "Enter a positive integer or 0 to quit: ";
    cin >> num; 
    
    while(num < 0)
    {
    	cout << "Invalid input; must be 0 or larger\n";
    	cout << "Enter a positive integer or 0 to quit: ";
    	cin >> num;
	} 
	
	return num;
}




/*************************************/
/* Setters for class but did not work*/
/*************************************/

//void CD::setArtist(string artist)
//{ artist = "Daft Punk"; }
//
//void CD::setTitle(string title)
//{ title = "Da Funk"; }
//
//void CD::setYear(int year)
//{ year = 1997; }
