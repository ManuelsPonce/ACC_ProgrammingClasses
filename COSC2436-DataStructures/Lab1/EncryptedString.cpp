#include "EncryptedString.h"

EncryptedString::EncryptedString():myString(string())
{	
}

EncryptedString::EncryptedString(string aString)
{
	set(aString);
}

// Method set - encrypt the string and store in the object
void EncryptedString::set(string aString)
{
	myString = "";
	// encrypt each character and add myString
	for(int i=0; i<aString.length(); i++)
	{
		char ch = aString[i];
		
		if (ch == 'Z')
		{
			ch = 'A';
			myString += ch;
		}
		else if (ch == 'z')
		{
			ch = 'a';
			myString += ch;
		}
		else if (isalpha(ch))
		{
			ch++;
			myString += ch;
		}
		else if (ch == ' ')
		{
			myString += ch;
		}
		// else remove the character
	}
}

// Method get - decrypt the string before returning
string EncryptedString::get() const
{
	string resultString = "";
	// encrypt each character and add myString
	for(int i=0; i<myString.length(); i++)
	{
		char ch = myString[i];
		
		if (ch == 'A')
		{
			ch = 'Z';
			resultString += ch;
		}
		else if (ch == 'a')
		{
			ch = 'z';
			resultString += ch;
		}
		else if (isalpha(ch))
		{
			ch--;
			resultString += ch;
		}
		else if (ch == ' ')
		{
			resultString += ch;
		}
	}
	return resultString;
}

// Methid getEncrypted - return a copy of the encrypted string
string EncryptedString::getEncrypted() const
{
	return myString;
}


