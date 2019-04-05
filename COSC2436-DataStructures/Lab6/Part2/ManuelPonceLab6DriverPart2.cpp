/* 
	Manuel Ponce 1784775
	LAb 6
	Data Structures
	11/21/2017
*/

//I COULD NOT MAKE THE STRING SORTS WORK.

#include <iostream>
#include <cstdlib>
#include <algorithm>    // std::sort()
#include "selectionSort.cpp"
#include "bubbleSort.cpp"
#include "insertionSort.cpp"
#include "mergesort.cpp"
#include "quicksort.cpp"
#include "RadixSort.cpp"
#include "RadixSort4String.cpp"
#include "shellSort.cpp"
#include "HeapSort.cpp"
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;


/**********************/
//function prototypes
int mainMenuOption();
int numRange();
void integerSort();
void sortIntegerFunctionDisplay(int);
int sortOption();
int stringRange();
void sortStringFunctionDisplay(int);
void stringSort();
int getSizeLastNameArray();


int main()
{
	
	int option = mainMenuOption();
	
	while (option != 3)
	{
		
		switch (option)
		{
			case 1:
				integerSort();
				break;
			case 2:
				stringSort();
				break; 
		}
		
		option = mainMenuOption();
	}

	cout << "Ending program 07";
	
return 0;
}

int mainMenuOption()
{
	int option;
	
	do
	{
		cout << "\n---Main Menu---\n";
		cout << "1. Integer\n";
		cout << "2. String\n"; 
		cout << "3. Quit\n";
		cout << "Pick an option from above: ";
		cin >> option;
		
		if ((option < 1) || (option > 3))
		cout << "Invalid option\n";
		
	}while((option < 1) || (option > 3));
	
	return option;
}

int numRange()
{
	int option;
	
	do
	{
		cout << endl;
		cout << "Test of Number Range\n";
		cout << "1. 50\n";
		cout << "2. 1K\n";
		cout << "3. 100K\n";
		cout << "4. 500K\n";
		cout << "5. 1Mil\n";
		cout << "6. 20Mil\n";
		cout << "7. Quit Option\n";
		cout << "Please pick an option: ";
		cin >> option;
		cin.ignore(100, '\n');
		
		if ((option < 1) || (option > 7))
			cout << "Invalid option\n\n";
		
	}while((option < 1) || (option > 7));
		
	return option;
}

void integerSort()
{

	int option = numRange();
	while (option != 7)
	{
		sortIntegerFunctionDisplay(option);	
		
		option = numRange();
	}
	
}

int sortOption()
{
	
	int option;
	
	do
	{
		cout << endl;
		cout << "Sort Option\n";
		cout << "1. Selection\n";
		cout << "2. Bubble\n";
		cout << "3. Insertion\n";
		cout << "4. Merge\n";
		cout << "5. Quick\n";
		cout << "6. Radix\n";
		cout << "7. Shell\n";
		cout << "8. Heap\n";
		cout << "9. STL Sort\n";
		cout << "10. Quit\n";
		cout << "Please pick an option: ";
		cin >> option;
		cin.ignore(100, '\n');
		
		if ((option < 1) || (option > 10))
			cout << "Invalid option\n\n";
		
	}while((option < 1) || (option > 10));
		
	return option;
	
}

void sortIntegerFunctionDisplay(int option)
{
	long long size = 0;
	
	if (option == 1)
		size = 50;
	else if (option == 2)
		size = 1000;
	else if (option == 3)
		size = 100000;
	else if (option == 4)
		size = 500000;	
	else if (option == 5)
		size = 1000000;	
	else if (option == 6)
		size = 1000000000;
	else
		cout << "ERROR\n";
	
	int* b = new int[size];
  
  	for(int i = 0; i < size; i++)
  	{
   		b[i] = (rand() % 100000000) + 1;
  	}
  	
	int sortOptionNum = sortOption();
	
	if (sortOptionNum == 1)
	{
	cout << "\n---Selection Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	selectionSort(b, size);

	cout << "\n---Selection Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 2)
	{
	cout << "\n---Bubble Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	bubbleSort(b, size);

	cout << "\n---Bubble Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time	cout << "\n---Bubble Sort---\n";
	}
	
	else if (sortOptionNum == 3)
	{	
	cout << "\n--Insertion Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds\n"; //displays start time
	insertionSort(b, size);
	cout << "\n---Insertion Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 4)
	{
		if (option == 1)
		{
			cout << "\n---Merge Sort---\n";	
			cout << fixed << showpoint << setprecision (5);
			double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
			cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
			mergeSort(b, 0, (size-1));
			cout << "\n---Merge Sort finished: " << size << " array\n";
			double finish = double(clock()) / CLOCKS_PER_SEC;
			cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																							   
			double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
			cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
		}
		
		else 
			cout << "Sorry Program will crash because of Recursion\n";
	}
	
	else if (sortOptionNum == 5)
	{
	cout << "\n---Quick Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	quickSort(b, 0, (size-1));
	cout << "\n---Quick Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 6)
	{
	if (size < 1000000)
	{
	cout << "\n---Radix Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	radixsort(b, size);
	cout << "\n---Radix Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	else 
		cout << "Will crash because of recursion\n";
	}
	
	else if (sortOptionNum == 7)
	{
	cout << "\n---Shell Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	shellSort(b, size);
	cout << "\n---Shell Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time

	}
	
	else if (sortOptionNum == 8)
	{
	cout << "\n---Heap Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	HEAPSORT(b, size);
	cout << "\n---Heap Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 9)
	{
	cout << "\n---STL Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	sort(b, b+size);
	cout << "\n---STL Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else 
		cout << "ERROR\n";
		
	delete [] b;
	b = nullptr;
	
}

int stringRange()
{
	int option;
	
	do
	{
		cout << endl;
		cout << "Test Number of Last Names Range\n";
		cout << "1. 50\n";
		cout << "2. 1K\n";
		cout << "3. 100K\n";
		cout << "4. Full List\n";
		cout << "5. Quit Option\n";
		cout << "Please pick an option: ";
		cin >> option;
		cin.ignore(100, '\n');
		
		if ((option < 1) || (option > 5))
			cout << "Invalid option\n\n";
		
	}while((option < 1) || (option > 5));
		
	return option;
}

void stringSort()
{

	int option = stringRange();
	while (option != 5)
	{
		sortStringFunctionDisplay(option);	
		
		option = stringRange();
	}
	
}

void sortStringFunctionDisplay(int option)
{
	int size = 0;
	//int size = getSizeLastNameArray();
	string input_name;
	
	ifstream input_file("LastName2010.txt");
	//string* a = new string [size];
	
	if (option == 1)
		size = 50;
	else if (option == 2)
		size = 1000;
	else if (option == 3)
		size = 100000;
	else if (option == 4)
		size = getSizeLastNameArray();
	else
		cout << "ERROR\n";
		
	string* a = new string [size];
	
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
			a[i] = input_name;
		}
		
		input_file.close();
	}
	
		
	int sortOptionNum = sortOption();	

	if (sortOptionNum == 1)
	{
	cout << "\n---Selection Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	selectionSort(a, size);

	cout << "\n---Selection Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 2)
	{
	cout << "\n---Bubble Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	bubbleSort(a, size);

	cout << "\n---Bubble Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time	cout << "\n---Bubble Sort---\n";
	}
	
	else if (sortOptionNum == 3)
	{	
	cout << "\n--Insertion Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds\n"; //displays start time
	insertionSort(a, size);
	cout << "\n---Insertion Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 4)
	{
		if (option == 1)
		{
			cout << "\n---Merge Sort---\n";	
			cout << fixed << showpoint << setprecision (5);
			double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
			cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
			mergeSort(a, 0, (size-1));
			cout << "\n---Merge Sort finished: " << size << " array\n";
			double finish = double(clock()) / CLOCKS_PER_SEC;
			cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																							   
			double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
			cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
		}
		
		else 
			cout << "Sorry Program will crash because of Recursion\n";
	}
	
	else if (sortOptionNum == 5)
	{
	cout << "\n---Quick Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	quickSort(a, 0, (size-1));
	cout << "\n---Quick Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 6)
	{	
	cout << "\n---Radix Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	radixSort(a, size);
	cout << "\n---Radix Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else if (sortOptionNum == 7)
	{
	cout << "\n---Shell Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	shellSort(a, size);
	cout << "\n---Shell Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
//	else if (sortOptionNum == 8)
//	{
//	cout << "\n---Heap Sort---\n";
//	cout << fixed << showpoint << setprecision (5);
//	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
//	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
//	HEAPSORT(a, size);
//	cout << "\n---Heap Sort finished: " << size << " array\n";
//	double finish = double(clock()) / CLOCKS_PER_SEC;
//	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
//																					   
//	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
//	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
//	}
	
	else if (sortOptionNum == 9)
	{
	cout << "\n---STL Sort---\n";
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Time  = " << setw(5) << start << " seconds"; //displays start time
	sort(a, a+size);
	cout << "\n---STL Sort finished: " << size << " array\n";
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end 
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete sort
	cout << "Time Elapsed to do Sort: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	}
	
	else 
		cout << "ERROR\n";
		
	delete [] a;
	a = nullptr;

}

int getSizeLastNameArray()
{
	string lastName;
	int size = 0;
	ifstream lastNameFile ("LastName2010.txt");
	
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

