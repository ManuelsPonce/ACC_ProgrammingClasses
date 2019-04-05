#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool inArray(int [], int, int);
void displayArray(int [], int);

int main()
{
	int winningNumbers[5] = {-1,-1,-1,-1,-1};
	int userNumbers[5] = {-1,-1,-1,-1,-1};
	int newNumber;
	
	// Create winning number
	for(int i=0; i<5; i++)
		if(!inArray(winningNumbers,newNumber = rand() % 10,5))
			winningNumbers[i] = newNumber;
			
	// Ask user for their number
	for(int i=0; i<5; i++)
	{
		cout << "Enter number " << i+1 << ": ";
		cin >> newNumber;
		while (inArray(userNumbers, newNumber, 5))
		{
			cout << "You cannot use duplicate numbers\n";
			cout << "Enter number " << i+1 << " again: ";
			cin >> newNumber;
		}
		userNumbers[i] = newNumber;
	}
	cout << "\nYour Numbers: ";
	displayArray(userNumbers, 5);
	
	cout << "\nWinning Numbers: ";		
	displayArray(winningNumbers, 5);
	
	//Display matching Numbers
	cout << "\nMatching Numbers: ";
	for(int i=0; i<5; i++)
		if(inArray(winningNumbers, userNumbers[i], 5))
			cout << userNumbers[i] << " ";
	cout << endl;
	
	return 0;
}

bool inArray(int numbers[], int num, int size)
{
	bool isIn = false;
	for(int i=0; i<size && !isIn; i++)
	{
		//cout << "number: " << numbers[i] << " num: " << num << endl;	
		isIn = numbers[i] == num;
	}
	return isIn;
}

void displayArray(int numbers[], int size)
{
	for(int i=0; i< size; i++)
		cout << numbers[i] << " ";
	cout << endl;
}
