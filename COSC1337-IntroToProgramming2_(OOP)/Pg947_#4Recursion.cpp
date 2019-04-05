#include <iostream>

using namespace std;

int addArray(int nums[], int size);

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		cout << "Enter an integer ";
		cin >> numbers[i];
	}
	
	cout << "The sum of the numbers is: " << addArray(numbers, SIZE - 1) << endl;
	
	return 0;
}

int addArray(int nums[], int size)
{
	if (size == 0)
		return nums[0];
	return nums[size] + addArray(nums, size - 1);
}
