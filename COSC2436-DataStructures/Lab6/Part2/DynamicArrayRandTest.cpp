#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() 
{
 
  int size = 500000000;
  int* array = new int[size];
  
  for(int i = 0; i < size; i++)
  {
    array[i] = (rand() % 100000000) + 1;
  }
  
  cout << "Dyanamic Array of size 500M Created Successfully\n";
/*
  for (int i = 0; i < size; i++)
	 {
		cout << "The number stored is "<< array[i] << "\n";		 
	 }
*/
  cout << "The first item: array [0] is " << array [0] << "\n";
  cout << "The middle item: array [259999999] is " << array [259999999] << "\n";
  cout << "The last item: array [499999999] is " << array [499999999] << "\n";
  delete [] array;
  array = nullptr;
  return (0);
}
