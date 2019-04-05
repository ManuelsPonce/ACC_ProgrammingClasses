#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


//Function Prototype
bool getRecord(ifstream &inputFile, string &who, int &howOld, string &favoriteColor);

int main()
{
	string name, color;
	int age;
	ifstream inputInfo;
	
	inputInfo.open("namesAgesColors.txt");
	
	if (inputInfo.fail())
	
		cout << "opening file failed\n";
		
	else
		
	{
		while (getRecord(inputInfo, name, age, color))	
		{
			cout << "Name " << name << endl;
			cout << "Age " << age << endl;
			cout << "Favorite Color " << color << endl;
		}
		
		cout << "No more Records";
		
	}
		
	return 0;
}

bool getRecord(ifstream &inputFile, string &who, int &howOld, string &favoriteColor)
{
	bool gotRecord;
	
	if (getline(inputFile, who))
	{
		
		cout << "Who: " << who << endl;
		inputFile >> howOld;
		cout << "Age: " << howOld << endl;
		inputFile.ignore(100, '\n');
		getline(inputFile, favoriteColor);
		cout << "Favorite Color: " << favoriteColor << endl;
	}
	
	else
	{
		gotRecord = false;
	}
	
	return gotRecord;
}
