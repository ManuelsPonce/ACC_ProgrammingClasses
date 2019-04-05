#include <iostream>
#include <cstdlib>

using namespace std;

class Coin
{
	private:
		string side;
		
	public: 
		Coin(); //Constructer
		~Coin(); //Destructor
		
		string getSide();
		void tossCoin();
};

Coin::Coin()
{side = "Heads"; //initialize to heads
cout << "Constructor running\n";}

Coin::~Coin()
{cout << "Destructor running\n";}

string Coin::getSide()
{return side;}

void Coin::tossCoin()
{
	int value;
	value = rand() % 2 + 1;
	value == 1? side="Heads":side="Tails"; //is the same as the if statement
				//	if (value == 1)
				//		side =true;
				//	else
				//		side = false;
}

int main()
{
	Coin coin1;
	
	for(int i=0; i<5; i++)
	{
		coin1.tossCoin();
	cout << "side up is: " << coin1.getSide() << endl;
	}
	return 0;
}
