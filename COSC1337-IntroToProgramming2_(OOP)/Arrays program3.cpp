#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void displayTotals(double salesValue[][3]);
void fillArray(double salesValue[][3]);
int main()
{
	double sales[7][3];
	int count,
		highest,
		lowest;
	
	fillArray(sales);
	displayTotal(sales);

	return 0;
}

void fillArray(double salesValue[][3])
{
	string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
	                 "Thursday", "Friday", "Saturday"};
	                 
	cout << "Enter Sales\n";    
	for (int col = 0; col < 3; col++)
	{
		cout << "Store #" << col + 1 << endl;
		for (int row = 0; row < 7; row++)
		{
			cout << "\t " << days[row] << ": ";
			cin >> salesValue[row][col];
		}
	}
}

void displayTotals(double salesValues[][3])
{
	double total;
	
	cout << "Total Sales\n";
	for (int col = 0; col < 3; col++)
	{
		total = 0.0
		for (int row = 0; row < 7; row++)
		{
			total += salesValues[row][col];
			
		}	
		cout << "Store #" << col + 1 << ": $" << fixed
		                  << setprecision(2) << total << endl;
	}
}
