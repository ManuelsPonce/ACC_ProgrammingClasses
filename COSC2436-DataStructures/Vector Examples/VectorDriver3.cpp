

#include <iostream>
#include <vector>

using namespace std;



int main()
{

vector<int> newVector;

for(int i = 0; i < 32; i++)
{
	newVector.push_back(i);
	cout << i << ": Size "<< newVector.size()<< ", Capacity "<< newVector.capacity()<< endl;
	
	newVector.pop_back();
	
}

return 0;
}  // end main

