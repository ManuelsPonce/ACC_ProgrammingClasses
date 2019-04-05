#include <iostream>

using namespace std;

void calcAverage(int *scores, int size, double *average);

int main()
{

	int size; 
	int score;
	double avg;
	
	cout << "How many test scores? ";
	cin >> size;
	
	int *scorePtr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "Enter score #" << i+1 << ": ";
		cin	>> score;
		while (score < 0)
		{
			cout << "Invalid: scores must be >= 0\n";
			cout << "Enter score #" << i+1 << ": ";
			cin	>> score;
		}
		*(scorePtr + i) = score;
	}
	
	calcAverage(scorePtr, size, &avg);
	
	cout << "Average score is " << avg << endl;
		
	return 0;
	
}

void calcAverage(int *scores, int size, double *average)
{
	double total = 0.0;
	
	for (int i = 0; i < size; i++)
		total += *(scores + i);	
		
	*average = total / size;
}
