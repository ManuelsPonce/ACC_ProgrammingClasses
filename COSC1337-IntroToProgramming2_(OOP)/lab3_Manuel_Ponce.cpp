//*************************************//
//			Masnuel Ponce    		   //
//	   		    Lab 3	 			   //									
//*************************************//

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

/**********************/
//function prototypes
void evenOdd();
void primeNumber();
void mathBreak();
int isEven(int);
int	 isPrime(int);
int mainMenuOption();
int	mathBreakOption();
int	getValidNum();
void testCD();
int readCollection(CD [], int);
void displayCollection(CD [], int);
void sortCollection();
void findCD();
void editCD();

int main()
{
	// Variable Declarations
	const int SIZE = 17;
	int option;
	CD fullCD[SIZE];
	int readCD;
	
	option = mainMenuOption();
	
	while(option != 7)
	{
		switch (option)
		{
			case 1:
				readCD = readCollection(fullCD, SIZE);
				break;
			case 2:
				if(readCD)
					displayCollection(fullCD, SIZE);
				else
					cout << "CD must be read first";
				break;
			case 3:
				if(readCD)
					sortCollection();
				else
					cout << "CD must be read first";
				break;
			case 4:
				if(readCD)
					findCD();
				else
					cout << "CD must be read first";
				break;
			case 5:
				if(readCD)
					editCD();
				else
					cout << "CD must be read first";
				break;
			case 6:
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
		cout << "1. Read Collection \n";
		cout << "2. Display Collection \n";
		cout << "3. Sort Collection \n";
		cout << "4. Find a CD \n";
		cout << "5. Edit a CD \n";
		cout << "6. Math Break \n";
		cout << "7. Quit \n";
		cout << "please pick an option: ";
		cin >> option;
		
		if ((option < 1) || (option > 7))
		cout << "Invalid option\n";
		
	}while((option < 1) || (option > 7));
	
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

///Function:		readCollection();
//Purpoose: 	Function stub for this lab.
int readCollection (CD collectionCD[], int size)
{
	ifstream inCD;
	string artistCD, titleCD;
	int yearCD;
	int success = 0;
	
	inCD.open("cd.txt");
	
	if (inCD)
	{
		for (int i=0; i < size; i++)
		{
			getline(inCD, artistCD);

			getline(inCD, titleCD);
			
			inCD >> yearCD;
			inCD.ignore(100,'\n');

			collectionCD[i].setArtist(artistCD);
			collectionCD[i].setTitle(titleCD);
			collectionCD[i].setYear(yearCD);
		}
		inCD.close();
		success = 1;
	}
	else
		cout << "Could not open file\n";
		
	return success;	
	
}


//Function:		displayCollection();
//Purpoose: 	Displays Information in the CD
void displayCollection(CD collectionCD[], int size)
{
	cout << "\n\n****** Album Information ******\n";
	cout << "  Artist  " << "    Title    " << "  Year Released  " << endl;
	for (int i=0; i < size; i++)
	{
		cout << collectionCD[i].getArtist() << "  ";
		cout << collectionCD[i].getTitle() << "  ";
		cout << collectionCD[i].getYear() << endl;
	}
}

//Function:		sortCollection();
//Purpoose: 	Function stub for this lab.
void sortCollection()
{
	cout << "Sort Collection\n";
}

//Function: 	findCD();
//Purpoose: 	Function stub for this lab.
void findCD()
{
	cout << "Find a CD\n";
}

//Function: 	editCD();
//Purpoose: 	Function stub for this lab.
void editCD()
{
	cout << "Edit a CD\n";
}


/***************************************/
/*   Function: displayCD_values()      */
/* sets the values set in  CD class    */
/***************************************/
/*
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
*/
