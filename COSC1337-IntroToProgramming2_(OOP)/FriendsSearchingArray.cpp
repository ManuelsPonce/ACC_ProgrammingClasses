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

int readFriends(Friend [], int);
void displayFriends(Friend [], int);
void searchFriends(Friend [], int);
void bubbleSortFriends(Friend [], int);
void selectionSortFriends(Friend [], int);
void binarySearchFriends(Friend [], int);

int main()
{
	const int SIZE = 10;
	int option;
	int friendsRead;
	Friend myFriends[SIZE];
	
	do
	{
	
		cout << "\n\nMAIN MENU\n";
		cout << "1. Read friends file\n";
		cout << "2. Display friends\n";
		cout << "3. Sort by age\n";
		cout << "4. Sort by favorite food\n";
		cout << "5. Find a friend\n";
		cout << "6. Binary search\n";
		cout << "7. Quit\n";
		
		cout << "Enter option: ";
		cin >> option;
		while (option < 1 || option > 7)
		{
			cout << "Invalid option\n\n";
			cout << "1. Read friends file\n";
			cout << "2. Display friends\n";
			cout << "3. Sort by age\n";
			cout << "4. Sort by favorite food\n";
			cout << "5. Find a friend\n";
			cout << "6. Binary search\n";
			cout << "7. Quit\n";
			
			cout << "Enter option again: ";
			cin >> option;	
		}
		
		switch (option)
		{
			case 1:
				friendsRead = readFriends(myFriends, SIZE);
				break;
			case 2:
				if (friendsRead)
					displayFriends(myFriends, SIZE);
				else
					cout << "Must read friends file first\n";
				break;
			case 3:
				if (friendsRead)
					bubbleSortFriends(myFriends, SIZE);
				else
					cout << "Must read friends file first\n";
				break;
			case 4:
				if (friendsRead)
					selectionSortFriends(myFriends, SIZE);
				else
					cout << "Must read friends file first\n";
				break;
			case 5:
				if (friendsRead)
					searchFriends(myFriends, SIZE);
				else
					cout << "Must read friends file first\n";	
				break;
			case 6:
				if (friendsRead)
					binarySearchFriends(myFriends, SIZE);
				else
					cout << "Must read friends file first\n";	
				break;
		}
		
	} while (option != 7);
	
	return 0;
}

int readFriends(Friend friendsArray[], int size)
{
	ifstream inFriends;
	string name, favFood;
	int age;
	int success = 0;
	
	inFriends.open("friends.txt");
	
	if (inFriends)
	{
		for (int i=0; i < size; i++)
		{
			getline(inFriends, name);

			inFriends >> age;

			inFriends.ignore(100,'\n');
			getline(inFriends, favFood);

			friendsArray[i].setName(name);
			friendsArray[i].setAge(age);
			friendsArray[i].setFood(favFood);
		}
		inFriends.close();
		success = 1;
	}
	else
		cout << "Could not open file\n";
		
	return success;	
	
}

void displayFriends(Friend friendsArray[], int size)
{
	cout << "\n\n****** My Friends ******\n";
	for (int i=0; i < size; i++)
	{

		cout << friendsArray[i].getName() << "  ";
		cout << friendsArray[i].getAge() << "   ";
		cout << friendsArray[i].getFood() << endl;
	}	
}

void bubbleSortFriends(Friend friendsArray[], int size)
{
	bool swapped = true;
	Friend temp;
	
	while (swapped)
	{
		swapped = false;
		for (int i=0; i < size-1; i++)
		{
			if (friendsArray[i].getAge() > friendsArray[i+1].getAge())
			{
				temp = friendsArray[i+1];
				friendsArray[i+1] = friendsArray[i];
				friendsArray[i] = temp;
				swapped = true;
			}
		}
	}
}

void selectionSortFriends(Friend friendsArray[], int size)
{
	string largestFood;
	int largestPosition;
	Friend temp;
	
	for (int start = 0; start < size-2; start++)
	{
		largestFood = friendsArray[start].getFood();
		largestPosition = start;
		for (int inner = start + 1; inner < size; inner++)
		{
			if (friendsArray[inner].getFood() > largestFood)
			{
				largestFood = friendsArray[inner].getFood();
				largestPosition = inner;
			}
		}
		temp = friendsArray[start];
		friendsArray[start] = friendsArray[largestPosition];
		friendsArray[largestPosition] = temp; 
	}
}

void searchFriends(Friend friendsArray[], int size)
{
	string search;
	bool found = false;
	
	cout << "\nEnter name ";
	getline(cin, search);
	
	for (int i=0; i < size && !found; i++)
		if (search == friendsArray[i].getName())
		{
			found = true;
			cout << "Found " << search << " at position " << i+1 << endl;
		}
		
	if (!found)
		cout << search << " was not found\n";			
}

void binarySearchFriends(Friend friendsArray[], int size)
{
	int first, last, middle;
	bool found;
	int position;
	string food;
	
	first = 0;
	last = size-1;
	found = false;
	position = -1;
	
	cin.ignore(100,'\n');
	cout << "\nEnter food ";
	getline(cin, food);
	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (friendsArray[middle].getFood() == food)
		{
			found = true;
			position = middle;
		}
		else if (friendsArray[middle].getFood() > food)
			last = middle - 1;
		else
			first = middle + 1;
					
	}
	if (found)
		cout << "Found " << food << " at position: " << position + 1 << endl;
	else
		cout << food << " not found\n";
	
		
}


