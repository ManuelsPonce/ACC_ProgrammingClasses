#ifndef EncryptedString_H
#define EncryptedString_H
//#include <iostream>
//#include <string>
using namespace std;

//* A class simulating encrypted messages *// 
class EncryptedString
{
public:
	EncryptedString();
	EncryptedString(string aString);
	void set(string s);
	string get() const;
	string getEncrypted() const;
	
private:
	string myString;
};
#include "EncryptedString.cpp"
#endif
