#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

class Coin
{
	private:
		string side; 
		
	public:
		Coin();
		Coin(string);
		Coin(string, int);
		~Coin();
		
		string getSide();
		void tossCoin();
		void setSide(string);
};

Coin::Coin()
{ 	side = "Heads"; // Initialize to heads
}

Coin::Coin(string s)
{	side = s;
}

Coin::Coin(string s, int i)
{
	if (i > s.length())
		if (!(i % 2))
			side = "soup";
		else
			side = "chocolate";
	else
		side = "carrot";
}

Coin::~Coin()
{  }

string Coin::getSide()
{ return side; }

void Coin::tossCoin()
{
	int value;
	value = rand() % 2 + 1;
	value == 1? side="Heads":side="Tails";
}

void Coin::setSide(string s)
{ side = s; }

void tossCoins(Coin tossing[], int size);
void displayCoins(Coin displaying[], int size);
void readSides(Coin reading[], int size);

int main()
{
	const int SIZE = 5;
	string strTmp;
	int num;
	
	Coin coin1;
	Coin coin2("chicken");
	
	cout << "Enter a string ";
	getline(cin, strTmp);
	cout << "Enter an integer ";
	cin >> num;
	
	Coin coin3(strTmp, num);
	
	cout << "coin1 side: " << coin1.getSide() << endl;
	cout << "coin2 side: " << coin2.getSide() << endl;
	cout << "coin3 side: " << coin3.getSide() << endl;
	
	//Coin coins[SIZE];
	
	

/*	
	cout << "Before reading\n";
	displayCoins(coins, SIZE);
	
	readSides(coins, SIZE);
	
	cout << "\nAfter reading\n";
	displayCoins(coins, SIZE);
	
	tossCoins(coins, SIZE);
	
	cout << "\nAfter tossing\n";
	displayCoins(coins, SIZE);	
*/	

	return 0;
} // end main()

void tossCoins(Coin tossing[], int size)
{
	for(int i=0; i<size; i++)
		tossing[i].tossCoin();

} // end tossCoins()

void displayCoins(Coin displaying[], int size)
{
	for(int i=0; i<size; i++)
		cout << displaying[i].getSide() << endl;

} // end displayCoins()

void readSides(Coin reading[], int size)
{
	ifstream inputSides;
	string side;
	int i;
	
	inputSides.open("coinSides.txt");
	if (inputSides)
	{
		for (i=0; i < size && !inputSides.eof(); i++)
		{
			getline(inputSides, side);
			reading[i].setSide(side);
		}
		if (i < size)
		{
			cout << "There were only " << i << " entries in the file\n";
			cout << "Using default for the rest\n";
		}
		inputSides.close();
	}
}
