#include <iostream>

using namespace std;

class Friend
{
	private:
		string name;
		int age;
		float shoeSize;
		
	public:
		Friend()
		{
			name = "";
			age = 0;
			shoeSize = 0.0;
		}
		void setName(string n) { name = n; }
		void setAge(int a) { age = a; }
		void setShoeSize(float s) { shoeSize = s; }
		
		string getName() { return name; }
		int getAge() { return age; }
		float getShoeSize() { return shoeSize; }
		
};

void displayFriends(Friend pals[]);
Friend findBigFoot(Friend chums[]);
Friend findShortStuff(Friend chums[]);

int main()
{
	Friend myFriends[3];
	string friendName;
	int friendAge;
	float friendShoeSize;
	
	for(int i=0; i < 3; i++)
	{
		cout << "Enter name: ";
		getline(cin, friendName);
		myFriends[i].setName(friendName);
		
		cout << "Enter age: ";
		cin >> friendAge;
		myFriends[i].setAge(friendAge);
		
		cout << "Enter shoe size: ";
		cin >> friendShoeSize;
		myFriends[i].setShoeSize(friendShoeSize);
		
		cin.ignore(100,'\n');
	}
	
	displayFriends(myFriends);
	return 0;
}

void displayFriends(Friend pals[])
{
	Friend extreme;
	
	cout << "\nMY FRIENDS\n";
	cout << "Name\t\tAge\tShoe Size\n";
	for(int i=0; i < 3; i++)
	{
		cout << pals[i].getName() << "\t";
		cout << pals[i].getAge() << "\t";
		cout << pals[i].getShoeSize() << endl;
	}
	
	extreme = findBigFoot(pals);
	cout << "\nBiggest foot goes to " << extreme.getName() << " with a shoe size of " 
	     << extreme.getShoeSize() << endl;
	     
	extreme = findShortStuff(pals);
	cout << "\nShortest name goes to " << extreme.getName() << " with a length of " 
	     << extreme.getName().length() << endl;
}

Friend findBigFoot(Friend chums[])
{
	Friend bigFootFriend;
	int bigFoot = 0;
	
	for(int i=0; i < 3; i++)
	{
		if (chums[i].getShoeSize() > bigFoot)
		{
			bigFoot = chums[i].getShoeSize();
			bigFootFriend = chums[i];
		}
	}
	return bigFootFriend;
}

Friend findShortStuff(Friend chums[])
{
	Friend shortNameFriend;
	int shortName;
	
	shortName = chums[0].getName().length();
	shortNameFriend = chums[0];
	
	for(int i=1; i < 3; i++)
	{
		if (chums[i].getName().length() < shortName)
		{
			shortName = chums[i].getName().length();
			shortNameFriend = chums[i];
		}
	}
	return shortNameFriend;
}
