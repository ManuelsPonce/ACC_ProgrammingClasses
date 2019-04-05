#include <iostream>
#include <fstream>

using namespace std;

void displayArray(const int [], int);

int main()
{
	int numbers[10];
	int count;
	ifstream inputFile;
	
	inputFile.open("arrays10numbers.txt");
	if (inputFile)
	{
		for(count = 0; count < 10 && !inputFile.eof(); count++)
			inputFile >> numbers[count];
	
		displayArray(numbers, count);
	
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
