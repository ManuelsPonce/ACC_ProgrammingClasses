#include <iostream>
#include <fstream>

using namespace std;

void displayArray(const int [], int);

void highLowArray(const int[], int, int &, int &);

int main()
{
	int numbers[10];
	int count,
		highest,
		lowest;
	ifstream inputFile;
	
	inputFile.open("arrays10numbers.txt");
	if (inputFile)
	{
		for(count = 0; count < 10 && !inputFile.eof(); count++)
			inputFile >> numbers[count];
	
		displayArray(numbers, count);
		
		highLowArray(numbers, count, highest, lowest);
		cout << "The largest number is: " << highest << endl;
		cout << "The smallest number is: " << lowest << endl;
	
	}
	else
		cout << "Could not open file\n";
		
	return 0;
}

void displayArray(const int values[], int size)
{
	for(int i = 0; i < size; i++)
		cout << values[i] << endl;
	
}

void highLowArray(const int values[], int size, int &high, int &low)
{
		
	high = values[0];
	low= values[0];
	
	for(int i = 1; i < size; i++)
	{
		if(values[i] > high)
			high = values[i];
		if (values[i] < low)
			low = values[i];
	}
}
