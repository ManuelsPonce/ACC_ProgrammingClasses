/* 
	Manuel Ponce 1784775
	LAb 7
	Data Structures
	12/12/2017
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>    // std::sort()
#include <iomanip>
#include <ctime>
#include <fstream>
#include "functionLinearTemplateSearch.cpp"
#include "functionTemplateBinarySearch.cpp"

using namespace std;


/**********************/
//function prototypes
int mainMenuOption();
int typeOfSearch();
void stringSearch();
void integerSearch();
void displayIntegerSearch(int);
void displayStringSearch(int);


int main()
{
	
	int option = mainMenuOption();
	
	while (option != 3)
	{
		
		switch (option)
		{
			case 1:
				stringSearch();
				break;
			case 2:
				integerSearch();
				break; 
		}
		
		option = mainMenuOption();
	}

	cout << "Ending program 07";
	
return 0;
}

int mainMenuOption()
{
	int mainMenuOption;
	
	do
	{
		cout << "\n---Main Menu---\n";
		cout << "1. String Search\n";
		cout << "2. Integer Search\n"; 
		cout << "3. Quit\n";
		cout << "Pick an option from above: ";
		cin >> mainMenuOption;
		
		if ((mainMenuOption < 1) || (mainMenuOption > 3))
		cout << "Invalid option\n";
		
	}while((mainMenuOption < 1) || (mainMenuOption > 3));
	
	return mainMenuOption;
}

int typeOfSearch()
{
	int searchOption;
	
	do
	{
		cout << endl;
		cout << "What kind of search?\n";
		cout << "1. Linear Search\n";
		cout << "2. Binary Search\n";
		cout << "3. Quit Option\n";
		cout << "Please pick an option: ";
		cin >> searchOption;
		cin.ignore(100, '\n');
		
		if ((searchOption < 1) || (searchOption > 3))
			cout << "Invalid option\n\n";
		
	}while((searchOption < 1) || (searchOption > 3));
		
	return searchOption;
}

void stringSearch()
{
	int option = typeOfSearch();
	while (option != 3)
	{
		if (option)
			displayStringSearch(option);
		
		else 
			cout << "Error\n";
			
		option = typeOfSearch();
	}
	
}


void integerSearch()
{
	int option = typeOfSearch();
	while (option != 3)
	{
		if (option)
			displayIntegerSearch(option);
		
		else 
			cout << "Error\n";
			
		option = typeOfSearch();
	}
}

void displayIntegerSearch(int searchType)
{
	
	int searchIntArray[10] = {654, 18, 81, 4, 92, 68, 145, 8, 99, 36}; //int
	int searchNum, result;
	
	//Displaying what array contains
	cout << endl << "Array contains: ";
	for (int i=0; i<10; i++)
		cout << searchIntArray[i] << ", ";
	
	//Getting user to pick a number to find in array
	cout << "\nWhat integer would you like to search for? ";
	cin >> searchNum;
	
	if (searchType ==1)
		result = linearSearch(searchIntArray, searchNum, 10); //Linear search is called	
	else if (searchType == 2)
	{
	sort(searchIntArray, searchIntArray+10); //sorting array to do binary search
	result = binarySearch(searchIntArray, 0, 9, searchNum); //Binary search is called
	}
	
	//Displaying Num looking for and if its is found or not
	cout << endl << "Searching for integer " << searchNum;
	if (result == -1)
		cout << endl << searchNum << " not found.\n";
	else 
		cout << endl << searchNum << " found!\n";
	
}

void displayStringSearch(int searchType)
{
	
	string searchStringArray[6] = {"Z", "X", "R", "K", "F", "B"}; //String
	string searchString;
	int result;
	
	
	//Displaying what array contains
	cout << endl << "Array contains: ";
	for (int i=0; i<6; i++)
		cout << searchStringArray[i] << ", ";
	
	//Getting user to pick a number to find in array
	cout << "\nWhat character would you like to search for?(CASE SENSITIVE): ";
	getline(cin, searchString);
	
	if (searchType ==1)
		result = linearSearch(searchStringArray, searchString, 6); //Linear search is called
	else if (searchType == 2)
	{
	sort(searchStringArray, searchStringArray+6); //sorting array to do binary search
	result = binarySearch(searchStringArray, 0, 5, searchString); //Binary search is called
	}
	
	//Displaying Num looking for and if its is found or not
	cout << endl << "Searching for character " << searchString;
	if (result == -1)
		cout << endl << searchString << " not found.\n";
	else 
		cout << endl << searchString << " found!\n";
	
}

