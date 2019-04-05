
#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() 
{ 

 long long size;
 cout<< "how big do you want the array?" << endl;
 cin >> size;



 long long array[size];
 
  
     
    for(long i=0; i<size; i++)
	{ 
        array[i] = (rand()); 
         
        cout << array[i] << endl;
	}
	
	return 0;
}
