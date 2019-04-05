#include <iostream>

using namespace std;

int main()
{
	
	int num;
	
	do
	{
		cout << "Enter a positive integer or -1 to quit ";
		cin >> num;
		
		if (num >= 0)
			cout << num * num << endl;
		
	}while (num >= 0);
	
	return 0;
}
