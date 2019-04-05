#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ifstream lastNameFile;
	string lastName;
	int size = 0;
	
	lastNameFile.open("LastName2010.txt");
	
	while(getline(lastNameFile, lastName))
	    size++;
	cout << size << endl;
	string* arrayLastName = new string[size];
	
	if (lastNameFile)
	{
		for (int i=0; i < size; i++)
		{
			getline(lastNameFile, lastName);
			arrayLastName[i] >> lastName;
			cout << arrayLastName[i];
		}
		
		lastNameFile.close();
	}
	else
		cout << "Could not open file\n";
		
return 0;
}


//class lastNames
//{
//	private:
//		string lastName;
//	public:
//		void setLastName(string);
//		string getLastName();
//};
//
//void lastNames::setLastName(string l)
//{
//	lastName = l;
//}
//string lastNames::getLastName()
//{
//	return lastName;
//}
//
//int main()
//{
//	ifstream lastNameFileNumber;
//	ifstream lastNameFile;
//	string lastNameNumber, lastName;
//	int size = 0;
//	
//	
//	lastNameFileNumber.open("LastName2010.txt");
//	
//	while(getline(lastNameFileNumber, lastNameNumber))
//	{
//		size++; //Getting total number of last names in the file 
//	}
//	lastNameFileNumber.close();
//	
//	lastNameFile.open("LastName2010.txt");
//	lastNames arrayLastName[size];
//	if (lastNameFile)
//	{
//		for (int i=0; i<size; i++)
//		{
//			getline(lastNameFile, lastName);
//
//			arrayLastName[size].setLastName(lastName);
//		}
//		lastNameFile.close();
//	}
//	
//	else
//		cout << "Could not open file\n";
//		
//	for (int i=0; i<10; i++)
//	{
//		cout << arrayLastName[i].getLastName();
//		cout << "HELLO\n";
//	}
//	
//	lastNameFile.close();
//		
//	return 0;	
//	
//}
