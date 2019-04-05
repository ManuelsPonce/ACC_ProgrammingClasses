#include <iostream>

using namespace std;

class Inventory
{
	private:
		int itemNumber;
		int	quantity;
		double cost;
		
	public: 
		Inventory(); //Constructer
		Inventory(int, int, double); //Constructer #2

		void setItemNumber(int);
		void setQuantity(int);
		void setCost(double);
		
		int getItemNumber();
		int getQuantity();
		double getCost();
		double getTotalCost();
};

Inventory::Inventory()
{
	itemNumber = 0; 
	quantity = 0; 
	cost  = 0.0;
}

Inventory::Inventory(int i, int q, double c)
{
	setItemNumber(i);
	setQuantity(q);
	setCost(c); 
}

void Inventory::setItemNumber(int i)
{	itemNumber = i; }

void Inventory::setQuantity(int q)
{	quantity = q; }

void Inventory::setCost(double c)
{	cost = c; }

int Inventory::getItemNumber()
{	return itemNumber; }

int Inventory::getQuantity()
{	return quantity; }

double Inventory::getCost()
{	return cost; }

double Inventory::getTotalCost()
{	return quantity * cost; }

int main()
{
	Inventory();
	
	int itemNum, 
		itemQuantity;
	double itemCost,
			totalItemCost;
			
	cout << "What is the item Number? ";
	cin >> itemNum;
	
	cout << "How many would you like of the item? ";
	cin >> itemQuantity;
		
	return 0;
}
