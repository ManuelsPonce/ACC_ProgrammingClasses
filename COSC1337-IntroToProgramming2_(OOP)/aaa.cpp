#include <iostream>
using namespace std;

int main()
{
	int x;
	float y;
	char ch;
	
	cout << "Enter an integer ";
	cin >> x;
	
	cin.ignore('\n');
	
	cout << "Enter a character ";
	ch = cin.get();
	//cout << "ch = " << static_cast<int>(ch);
	cout << "Thank you\n";
	
	return 0;
}
