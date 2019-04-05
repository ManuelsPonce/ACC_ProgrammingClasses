//---------------//
//	Manuel Ponce //
//	Grade: 90    //
//---------------//

#include <iostream>

using namespace std;

class Friend
{
	private:
		string name;
		int age;
		float shoeSize;
		
	public:
		
		Friend();
		
		string getName();
		int getAge();
		float getShoeSize();
		
		void setName(string);
		void setAge(int);
		void setShoeSize(float);
	
};

Friend::Friend()
{
	name = "";
	age = 0;
	shoeSize = 0.0;
}
string Friend::getName()
{ return name; }

int Friend::getAge()
{ return age; }

float Friend::getShoeSize()
{ return shoeSize; }

void Friend::setName(string n)
{ name = n; }

void Friend::setAge(int a)
{ age = a; }

void Friend::setShoeSize(float z)
{ shoeSize = z; }


//Prototypes
void displayFriends(Friend[], int);
int main()
{
	const int SIZE = 3;
	string name;
	int age;
	float shoeSize;
	Friend myFriend[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Friend name: ";
		getline(cin, name);
		
		cout << "Age: ";
		cin >> age;
		
		cout << "Shoe size: ";
		cin >> shoeSize;
		cin.ignore(100,'\n');
		cout << endl;
		
		myFriend[i].setName(name);
		myFriend[i].setAge(age);
		myFriend[i].setShoeSize(shoeSize);
	}

	//Diplay Friends
	displayFriends(myFriend, SIZE);
	
	return 0; 
}

void displayFriends(Friend friendsArray[], int size)
{
	cout << "\n\n****** My Friends ******\n";
	cout << "Name " << " Age " << " Shoe Size " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << friendsArray[i].getName() << "  ";
		cout << friendsArray[i].getAge() << "   ";
		cout << friendsArray[i].getShoeSize() << endl;
	}	
}
