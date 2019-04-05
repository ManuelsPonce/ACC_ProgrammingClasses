#include <iostream>
#include <fstream>

using namespace std;

class Friend
{
	private:
		string name;
		int age;
		string food;
		
	public:
		string getName();
		int getAge();
		string getFood();
		void setName(string);
		void setAge(int);
		void setFood(string);
};
string Friend::getName()
{ return name; }

int Friend::getAge()
{ return age; }

string Friend::getFood()
{ return food; }

void Friend::setName(string n)
{ name = n; }

void Friend::setAge(int a)
{ age = a; }

void Friend::setFood(string f)
{ food = f; }


Friend *enterInfo(int howMany);

int main()
{
	Friend *buddy = NULL;
	
	int numFriends;
	
	cout << "How many friends do you have? ";
	cin >> numFriends;
	cin.ignore(100, '\n');
	
	buddy = enterInfo(numFriends);
	
	for (int count = 0; count < numFriends; count++)
	{
		cout << "Friend Info:\n";
		cout << buddy[count].getName() << endl;
		cout << buddy[count].getAge() << endl;
		cout << buddy[count].getFood() << endl;
	}
	
	delete [] buddy;
	buddy = NULL;
	
	return 0;	
}

Friend *enterInfo(int howMany)
{
	string name, food;
	int age;
	Friend *pal = NULL;
	
	pal = new Friend[howMany];
	
	for(int count = 0; count < howMany; count++)
	{
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter age: ";
		cin >> age;
		cin.ignore(100, '\n');
		cout << "Enter favorite food: ";
		getline(cin, food);	
		
		pal[count].setName(name);
		pal[count].setAge(age);
		pal[count].setFood(food);
	}
	
	return pal;
}
