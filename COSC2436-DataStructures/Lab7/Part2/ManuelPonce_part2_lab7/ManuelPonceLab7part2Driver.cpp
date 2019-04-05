/* 
	Manuel Ponce 1784775
	LAb 7
	Data Structures
	12/12/2017
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>    // std::sort(), was too slow
#include <iomanip>
#include <ctime>
#include <fstream>
#include "functionLinearTemplateSearch.cpp"
#include "functionTemplateBinarySearch.cpp"
#include "quicksort.cpp" //Use quick sort from lab 6

using namespace std;


/**********************/
//function prototypes
int mainMenuOption();
int typeOfSearch();
void stringSearch();
void integerSearch();
void displayIntegerSearch(int);
void displayStringSearch(int);
long long getSizeLastNameArray();


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
	long long numOfRandInt;
	cout << "How many integers would you like to search through? ";
	cin >> numOfRandInt;
	
	int* searchIntArray = new int[numOfRandInt];
  
  	for(int i = 0; i < numOfRandInt; i++)
   		searchIntArray[i] = (rand() % 100000000) + 1;
	
	//Displaying what array contains//
//	cout << endl << "Array contains: ";
//	for (int i=0; i<numOfRandInt; i++)
//		cout << searchIntArray[i] << ", ";
	
	int searchNum, result;
	//Getting user to pick a number to find in array
	cout << "\nWhat integer would you like to search for? ";
	cin >> searchNum;
	cout << endl << "Searching for the integer (if binary search, a sort will happen first): " << searchNum; //Displaying Num looking for
	
	if (searchType ==1)
		{
		cout << fixed << showpoint << setprecision (5);
		double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
		//cout << "Start Time  = " << setw(5) << start << " seconds\n"; //displays start time
	
		result = linearSearch(searchIntArray, searchNum, numOfRandInt); //Linear search is called	
		
		double finish = double(clock()) / CLOCKS_PER_SEC;
		//cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 																				   
		double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
		cout << "\nTime Elapsed to do linear search: " << setw(5) << elapsed << " seconds"; //displays elapsed time
		}
	
	else if (searchType == 2)
	{
		
		quickSort(searchIntArray, 0, numOfRandInt-1); //sorting array to do binary search
		
		cout << fixed << showpoint << setprecision (5);
		double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
		//cout << "Start Time  = " << setw(5) << start << " seconds\n"; //displays start time
		
		result = binarySearch(searchIntArray, 0, numOfRandInt-1, searchNum); //Binary search is called
		
		double finish = double(clock()) / CLOCKS_PER_SEC;
		//cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 																				   
		double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
		cout << "\nTime Elapsed to do binary search: " << setw(5) << elapsed << " seconds"; //displays elapsed time
	}
		
	//Displaying if num is found or not
	if (result == -1)
		cout << endl << searchNum << " not found.\n";
	else 
		cout << endl << searchNum << " found!\n";
		
	delete [] searchIntArray;
	searchIntArray = nullptr;
	
}

void displayStringSearch(int searchType)
{
	
	long long size = 0;
	string input_name;
	
	ifstream input_file("LastName2010new.txt");
	size = getSizeLastNameArray();
	string* searchStringArray = new string [size];
	
	if(input_file.is_open())
	{
		while(!input_file.eof())
		{
			getline(input_file, input_name);
		}
		
		input_file.clear();
		input_file.seekg(0, ios::beg);
		
		for (int i=0; i<size; i++)
		{
			getline(input_file, input_name);
			searchStringArray[i] = input_name;
		}
		
		input_file.close();
	}
	
	//Displaying what array contains//
//	cout << endl << "Array contains: ";
//	for (int i=0; i<6; i++)
//		cout << searchStringArray[i] << ", ";
	
	string searchString;
	int result;
	//Getting user to pick a number to find in array
	cout << "\nWhat name would you like to search for?(CASE SENSITIVE): ";
	getline(cin, searchString);
	//Displaying String looking for
	cout << endl << "Searching for the name (if binary, a sort will happen first): " << searchString;
	
	if (searchType ==1)
	{
		cout << fixed << showpoint << setprecision (5);
		double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
		//cout << "Start Time  = " << setw(5) << start << " seconds\n"; //displays start time
		
		result = linearSearch(searchStringArray, searchString, size); //Linear search is called
		
		double finish = double(clock()) / CLOCKS_PER_SEC;
		//cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 																				   
		double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
		cout << "\nTime Elapsed to do linear search: " << setw(5) << elapsed << " seconds"; //displays elapsed time
	}
	
	else if (searchType == 2)
	{
		quickSort(searchStringArray, 0, size-1); //sorting array to do binary search
		
		cout << fixed << showpoint << setprecision (5);
		double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
		//cout << "Start Time  = " << setw(5) << start << " seconds\n"; //displays start time
		
		result = binarySearch(searchStringArray, 0, size-1, searchString); //Binary search is called
		
		double finish = double(clock()) / CLOCKS_PER_SEC;
		//cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 																				   
		double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
		cout << "\nTime Elapsed to do binary search: " << setw(5) << elapsed << " seconds"; //displays elapsed time
	}
	
	//Displaying Num looking for and if its is found or not
	if (result == -1)
		cout << endl << searchString << " not found.\n";
	else 
		cout << endl << searchString << " found!\n";
		
	delete [] searchStringArray;
	searchStringArray = nullptr;
	
}

long long getSizeLastNameArray()
{
	string lastName;
	long long size = 0;
	ifstream lastNameFile ("LastName2010new.txt");
	
	if (lastNameFile.is_open())
	{
		while ( getline (lastNameFile,lastName) )
		{	
			size++;
		}
		
		lastNameFile.close();
	}
	
	else 
		cout << "Unable to open file";
		
	return size;
}


