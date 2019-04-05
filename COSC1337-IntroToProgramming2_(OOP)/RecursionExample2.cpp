#include <iostream>

using namespace std;

int factorial(int);

int main ()
{
	int number;
	
	cout << "Enter an integer ";
	cin >> number;
	
	cout << number << " factorial is " << factorial(number) << endl;
	
	return 0;
}

int factorial (int num)
{
	if (num == 0)
		return 1;
	else 
		return num * factorial(num - 1);
}
