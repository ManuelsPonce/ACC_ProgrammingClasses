/* 
	Manuel Ponce 1784775
	LAb 1
	Splitting a working program into three files. The driver, class header, and class implementation file.
	Data Structures
	9/3/2017
*/

#include <iostream>
#include "EncryptedString.h"
#include <string>
#include <cctype>
using namespace std;

int main()
{
	EncryptedString str1;
	cout << "Empty string not encrypted: " << str1.get() << endl;
	cout << "Empty string     encrypted: " << str1.getEncrypted() << endl << endl;
	
	str1.set("abcd");
	cout << "'abcd' not encrypted: " << str1.get() << endl;
	cout << "'abcd'     encrypted: " << str1.getEncrypted() << endl << endl;
	
	EncryptedString str2("Hi Mom!");
	cout << "'Hi Mom!' not encrypted: " << str2.get() << endl;
	cout << "'Hi Mom!'     encrypted: " << str2.getEncrypted() << endl;
	cout << "Note: '!' is illegal and is removed" << endl;
	
	return 0;
}
