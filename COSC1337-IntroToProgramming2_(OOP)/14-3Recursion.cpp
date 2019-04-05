// This program demonstrates a recursive function for
// counting the number of times a character appears
// in a string. 
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int frequency(char ch, string inputString , int pos);
int repeatFrequency(char ch, string inputString);

int main()
{
   string inputString;
   char letter;
   
   cout << "Enter a string: ";
   cin >> inputString;
   cin.ignore();
   
   cout << "Enter a letter: ";
   letter = getchar();
	
   cout << "The letter \"" << letter << "\" appears "
	    << frequency(letter, inputString, 0) << " times.\n";
	    
	cout << "Times is " << repeatFrequency(letter, inputString) << endl;
   return 0;
}
	
	
int repeatFrequency(char ch, string inputString) 
{
	int count = 0;
	
	for(int i=0; i < inputString.length(); i++)
		if(ch == inputString[i])
			count++;
			
	return count;	
}

	
//************************************************
// Function frequency. This recursive function   *
// counts the number of times the character      *
// ch appears in inputString. The search begins  *
// at index position in the string.              *
//************************************************
int frequency(char ch, string inputString, int position) 
{ 
   	if (position == inputString.length())   //base case
	{
   		cout << "    Base case\n";
      	return 0;
	}
	if (inputString[position] == ch)
   	{
   		cout << "    Found a match\n";
		return 1 + frequency(ch, inputString, position+1);
	}
	else
	{
		cout << "        continuing....\n";
		return frequency(ch, inputString, position+1);
	}
}
