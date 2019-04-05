#include <iostream>
#inlcude <fstream>

using namespace std;

int main()
{	
	ifstream inputFile; 
	
	string  line;
	
	inputFile.open("names.txt");
	
	if (inputFile)
	{
		while(getline(inputFile, line))
		cout << line << endl;
		
		inputFile.close();
	}
	else 
		cout << "file not open \n";
	
return 0;	
}

