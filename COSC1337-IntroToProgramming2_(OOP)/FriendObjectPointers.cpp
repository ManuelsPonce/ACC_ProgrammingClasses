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


void enterInfo(Friend *pal);

int main()
{
	Friend buddy;
	
	enterInfo(&buddy);
	
	cout << "Friend Info:\n";
	cout << buddy.getName() << endl;
	cout << buddy.getAge() << endl;
	cout << buddy.getFood() << endl;
		
}

void enterInfo(Friend *pal)
{
	string name, food;
	int age;
	
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter age: ";
	cin >> age;
	cin.ignore(100, '\n');
	cout << "Enter favorite food: ";
	getline(cin, food);	
	
	pal->setName(name);
	pal->setAge(age);
	pal->setFood(food);

}
