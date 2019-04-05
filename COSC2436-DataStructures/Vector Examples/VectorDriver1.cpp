

#include <iostream>
#include <vector>

using namespace std;



int main()
{

vector<int> vectorOne(10, 1);

for(int i = 0; i < 10; i++)
	{
		cout << "Element "<< i << ": "<< vectorOne.at(i) << endl; //.at to proccess one by one.
	}

   return 0;
}  // end main

