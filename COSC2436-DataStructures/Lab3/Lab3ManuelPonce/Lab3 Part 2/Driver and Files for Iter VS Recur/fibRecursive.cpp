// Author:                      Manuel Ponce 
// Assignment Number:           Lab 3
// File Name:                   fibrecursiveManuelPonce
// Course/Section:              COSC 2436 Section 003
// Due Date:                    October 12th, 2017
// Instructor:                  Bernard Ku

// This program receives a number from the user. 
// and calls recursive Fibonacci function to 
// find the Fibonacci number

#include <iostream>
using namespace std;

long long fibonacciRecursive(long long);

//int main()
//{
//	string option;
//    long long fibNumber;
//
//	cout << "Enter a positive integer: ";
//	cin >> fibNumber;
//	cin.ignore(100, '\n');
//	
//	while (fibNumber<=0)
//	{
//		cout << "Please enter a positive: ";
//		cin >> fibNumber;
//		cin.ignore(100, '\n');
//	}
//	
//	cout << "processing...\n";
//    cout << "Fibonacci number is: " << fibonacciRecursive(fibNumber) << endl;	
//}

long long unsigned fibonacciRecursive(long long unsigned fibNum) 
{
    if (fibNum < 2)
		return fibNum;
    
    else
    	return (fibonacciRecursive(fibNum - 1) + fibonacciRecursive(fibNum - 2));
}
