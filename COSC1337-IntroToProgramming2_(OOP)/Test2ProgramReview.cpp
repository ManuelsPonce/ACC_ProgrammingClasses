#include <iostream>

using namespace std;

class Bites
{
	private:
		string date;
		int numBites;
		bool usedRepellent;
		
	public:
		Bites(){ };
		void setDate(string d) {date = d;};
		void setNumBites(int num) {numBites = num;};
		void setUsedRepellent(bool used) {usedRepellent = used;};
		
		string getDate(){return date;};
		int getNumBites(){return numBites;};
		bool getUsedRepellent(){return usedRepellent;};
};

string biteRating(int);
void displayBiteData(Bites []);

const int SIZE = 2;

int main()
{
	Bites bite[SIZE];
	
	bite[0].setDate("4/3/17");
	bite[0].setNumBites(70);
	bite[0].setUsedRepellent(true);
	
	bite[1].setDate("3/3/17");
	bite[1].setNumBites(121);
	bite[1].setUsedRepellent(false);
	
	displayBiteData(bite);
	
	return 0;
}

string biteRating(int num)
{
	string rating;
	
	if (num < 20)
		rating = "low";
	else if (num <= 59)
		rating = "med";
	else if (num <= 120)
		rating = "high";
	else
		rating = "toast";
		
	return rating;
}

void displayBiteData(Bites array[])
{
	cout << "Date      Number of Bites      Used Repellent       Rating\n";
	
	for (int i=0; i<SIZE; i++)
	{
		cout << array[i].getDate() << "    ";
		cout << array[i].getNumBites() << "    ";
		array[i].getUsedRepellent() == true? cout << "True" << "   ": cout << "False" << "    ";
		cout << biteRating(array[i].getNumBites()) << endl;
	}
}

