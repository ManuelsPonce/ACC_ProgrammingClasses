#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	string line;
	
	inputFile.open("Exam1ReviewFile.txt");
	
	if (inputFile) 
	{
		while (getline(inputFile, line))
		{
			cout << line << endl;
		}
	}
	else
		cout << "could not open file\n";
return 0;
}
