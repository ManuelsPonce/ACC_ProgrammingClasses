//Manuel Ponce

#include <iostream>
using namespace std;

class Example
{
	int x;
	public:
		Example(int a) { x = a; }
		void setValue(int);
		void printAddressAndValue();
};


void Example::setValue(int a)
{
	x = a;
}

void Example::printAddressAndValue()
{
//	cout << "The object at address " << this << " has "
//	     << "value " << (*this).x << endl;
	cout << "The object at address " << this << " has "
	     << "value " << this->x << endl;

}

int main()
{
	Example obj1(10), obj2(20);
	
	cout << "obj1 address: " << &obj1 << endl;
	cout << "obj2 address: " << &obj2 << endl << endl;

	cout << "obj1:\n";
	obj1.printAddressAndValue();
	cout << "obj2:\n";
	obj2.printAddressAndValue();
	
}
