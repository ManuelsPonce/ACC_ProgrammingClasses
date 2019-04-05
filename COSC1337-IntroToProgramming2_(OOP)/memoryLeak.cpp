#include <iostream>

using namespace std;

int main()
{
	double *numbers = NULL;
	
	for (;1;)
	{
		numbers = new double[10000000];
		cout << "Just allocated memory\n";
		getchar();
		
		/*
		delete [] numbers;
		numbers = NULL;
		cout << "Just freed memory\n"
		getchar();
		*/
	}
	
	return 0;
	
}
