/* 
	Manuel Ponce 1784775
	LAb 6
	Data Structures
	11/21/2017
*/

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

using namespace std;

void sortIntegerFunctionDisplay(int);
void sortStringFunctionDisplay(int);
int mainMenuOption();
void integerSort();
int sortOption();
void stringSort();

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
	
}  // end main

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

void integerSort()
{

	int option = sortOption();
	while (option != 10)
	{
		sortIntegerFunctionDisplay(option);	
		
		option = sortOption();
	}
	
}

void stringSort()
{

	int option = sortOption();
	while (option != 10)
	{
		sortStringFunctionDisplay(option);	
		
		option = sortOption();
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
	int b[10] = {654, 18, 81, 4, 92, 68, 145, 8, 99, 36}; //Int
	
	if (option == 1)
	{
	cout << "\n---Selection Sort---\n";
	selectionSort(b, 10);
	for (int i = 1; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 2)
	{
	cout << "\n---Bubble Sort---\n";
	bubbleSort(b, 10);
	for (int i = 0; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 3)
	{	
	cout << "\n--Insertion Sort---\n";
	insertionSort(b, 10);
	for (int i = 0; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 4)
	{
	cout << "\n---Merge Sort---\n";	
	mergeSort(b, 0, 9);
	for (int i = 0; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 5)
	{
	cout << "\n---Quick Sort---\n";
	quickSort(b, 0, 9);
	for (int i = 0; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 6)
	{	
	cout << "\n---Radix Sort---\n";
	radixsort(b, 10);
	for (int i = 0; i < 10; i++) //int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 7)
	{
	cout << "\n---Shell Sort---\n";
	shellSort(b, 10);
	for (int i = 0; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 8)
	{
	cout << "\n---Heap Sort---\n";
	HEAPSORT(b, 10);
	for (int i = 1; i <= 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else if (option == 9)
	{
	cout << "\n---STL Sort---\n";
	sort(b, b+10);
	for (int i = 0; i < 10; i++) //Int sort
		cout << b[i] << " ";
	cout << endl;
	}
	
	else 
		cout << "ERROR\n";
	
}

void sortStringFunctionDisplay(int option)
{
	string a[6] = {"Z", "X", "R", "K", "F", "B"}; //String	

	if (option == 1)
	{
	cout << "---Selection Sort---\n";
	selectionSort(a, 6);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}

	else if (option == 2)
	{
	cout << "\n---Bubble Sort---\n";
	bubbleSort(a, 6);
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";
	cout << endl; 
	}
	
	else if (option == 3)
	{
	cout << "\n--Insertion Sort---\n";
	insertionSort(a, 6);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}
	
	else if (option == 4)
	{
	cout << "\n---Merge Sort---\n";
	mergeSort(a, 0, 5);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}
	
	else if (option == 5)
	{
	cout << "\n---Quick Sort---\n";
	quickSort(a, 0, 5);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}	
	
	else if (option == 6)
	{
	cout << "\n---Radix Sort---\n";
	radixSort(a, 6);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}
	
	else if (option == 7)
	{
	cout << "\n---Shell Sort---\n";
	shellSort(a, 6);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}
	
	else if (option == 8)
	{
	cout << "\n---Heap Sort---\n";
	}
	
	else if (option == 9)
	{
	cout << "\n---STL Sort---\n";
	sort(a, a+6);
	for (int i = 0; i < 6; i++) //String sort
		cout << a[i] << " ";
	cout << endl;
	}
	
	else 
		cout << "ERROR\n";
	
}
