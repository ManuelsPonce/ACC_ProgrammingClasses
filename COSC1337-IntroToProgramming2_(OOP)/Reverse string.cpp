#include <iostream>
using namespace std;

void reverse(const string& a);

int main()
{
    string reverseString;
    cout << " Please enter a string: ";
    getline(cin, reverseString);
    reverse(reverseString);
    return 0;    
}

void reverse(const string& string)
{
    size_t numOfChars = string.size();

    if(numOfChars == 1)
       cout << "\nReversed string is: " << string << endl;
    else
    {
       cout << string[numOfChars - 1];
       reverse(string.substr(0, numOfChars - 1));
    }
}
