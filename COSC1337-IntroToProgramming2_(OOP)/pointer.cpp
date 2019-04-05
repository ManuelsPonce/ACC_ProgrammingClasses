#include <iostream>

using namespace std;

int main()
{
	int x;
	
	int *ptr;
	
	x = 4;
	
	ptr = &x;
	
	
	
	cout << "x is " << x << " the address of x is " << ptr << endl;
	cout << "The address of x is " << &x << endl;
	cout << "*ptr is " << *ptr << endl;
	
	*ptr = 99;
	
	cout << "x is " << x << " the address of x is " << ptr << endl;
	cout << "The address of x is " << &x << endl;
	cout << "*ptr is " << *ptr << endl;
	
	return 0;
}
