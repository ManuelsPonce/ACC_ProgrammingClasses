#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <array> 

using namespace std;

int main()
{
	string lastName, arrayLastname;
	int size = 0;
	ifstream lastNameFile ("LastName2010.txt");
	
	if (lastNameFile.is_open())
	{
		while (getline (lastNameFile,lastName))
		{	
			size++;
		}
		
	  string* array = new string[size];
	  
	  for(int i = 0; i<size; i++)
	  {
	    lastNameFile >> array[i];
	  }
	  
		for (int k=0; k<10; k++)
		{
			cout << array[k] << endl;
		}
			
		lastNameFile.close();
	}
	
	else 
		cout << "Unable to open file";
  
	cout << size;
}

