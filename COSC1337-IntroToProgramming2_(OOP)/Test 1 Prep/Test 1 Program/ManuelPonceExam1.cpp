//Going for 90
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function Prototype
float averageChar(float totalChar, float totalLine);

int main()
{
	ifstream inputFile;
	string line;
	float numChar,
		numLine;
	
	inputFile.open("cards.txt");
	
	if (inputFile) 
	{
		while (getline(inputFile, line))
		{
			cout << line << endl;
			numLine++;
			numChar += line.length();
		}
	}
	else
		cout << "could not open file\n";
	
	cout << endl << "Average number of Characters per line is: " << averageChar(numChar, numLine);
	
return 0;
}


float averageChar(float totalChar, float totalLine)
{
	
	return (totalChar / totalLine);
	
}
