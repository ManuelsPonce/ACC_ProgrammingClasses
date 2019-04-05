// Author:                      Manuel Ponce
// Assignment Number:           Lab 3
// File Name:                   Part1.cpp
// Course/Section:              COSC 2436 Section 003
// Due Date:                    October 12th, 2017
// Instructor:                  Bernard Ku
//Writes a recursive function that calculates and returns an, where a is a real number and n is a integer. Remember that for all a,:
//a^0 is 1
//Can also calculate negative power

#include <iostream>
#include "math.h"

using namespace std;

//Function prototypes
double power(double num, int expo);
float negPower(double num, int expo);
void option();
void displayPowerFunction();
void displayNegativePowerFunction();
void option();

int main ()
{
	
	option();

	return 0;
}

//Power Function
double power(double num, int expo)
{
	if (expo==0)
		return 1;
	else 
		return num * power(num, expo-1); //Does the recursive call until exponential = 0
	
}

//Bonus Power Function
float negPower(double num, int expo)
{
	if (expo==0)
		return 1;
		
	else if (expo<0)
		//expo = abs(expo);
		return (1/(num * power(num, (abs(expo)-1)))); //Turns the negative exponential into positive and takes the reciprical
}


//Gets User option to pick neg or reg integer expo
void option()
{
	int option; 
	
	cout << "Pick an option from below\n";
	cout << "1. Exponential integer\n";
	cout << "2. Negative exponential integer (BONUS)\n";
	cout << "3. Quit\n";
	cout << "Option: ";
	cin >> option;
	cout << endl;
	
	while (option !=3)
	{
	
	if (option==1)
		displayPowerFunction();
	
	else if (option==2)
		displayNegativePowerFunction();	
	
	else
		cout << "Please pick an option from above.\n\n";	
	
	cout << "Pick an option from below\n";
	cout << "1. Exponential integer\n";
	cout << "2. Negative exponential integer (BONUS)\n";
	cout << "3. Quit\n";
	cout << "Option: ";
	cin >> option;
	cout << endl;
		
	}
	cout << "Goodbye 07";
}

//Displays reg powerFunc
void displayPowerFunction()
{
	double base;
	int exponential;
	
	cout << "Enter a number base: ";
	cin >> base;
	cout << "Enter the power you want the base raised to: ";
	cin >> exponential;

	//cout << "Base: " << base << endl;
	//cout << "Raised to the power of: " << exponential << endl;
	cout << "Answer: " << power(base, exponential) << endl << endl;
}


//Displays neg powerFunct
void displayNegativePowerFunction()
{
	double base;
	int exponential;
	
	cout << "***BONUS***\n";
	cout << "Enter a number base: ";
	cin >> base;
	cout << "Enter the Negative power you want the base raised to: ";
	cin >> exponential;
	
	cout << "Answer: " << negPower(base, exponential) << endl << endl;
}
