#include<iostream>

using namespace std;

template <class itemType>
int linearSearch(itemType *a, itemType item, int n)
{
	int index;
	for(int i=0; i<n; i++)
	{

		if(a[i]== item)
			index = 1;
		
		else if (index!=1)
			index = -1;
	}
	
	return index;
}


