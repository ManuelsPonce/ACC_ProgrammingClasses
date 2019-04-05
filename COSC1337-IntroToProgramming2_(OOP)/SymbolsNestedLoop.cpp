#include <iostream>

using namespace std;

int main()
{ 
	char symbol;
	
	cout << "Enter symbol: ";
	cin >> symbol;
	
	for(int row = 0; row < 5; row++)
	{
		for (int col = 0; col < row + 1; col++)
			cout << symbol;	
		cout << endl;
	}
	cout << endl << endl;
	
	for(int row = 0; row < 5; row++)
	{
		for (int col = 0; col < row + 1; col++)
			if(col == 0 || col == row)
			cout << symbol;	
		cout << endl;
	}
}
