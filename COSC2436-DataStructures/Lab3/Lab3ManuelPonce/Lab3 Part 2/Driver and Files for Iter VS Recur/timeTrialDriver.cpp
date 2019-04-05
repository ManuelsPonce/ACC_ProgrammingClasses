// Author:                      Manuel Ponce and Armando Mendoza
// Assignment Number:           Lab 3
// File Name:                   FibonacciRecIteDriver.cpp
// Course/Section:              COSC 2436 Section 003
// Due Date:                    October 12th, 2017
// Instructor:                  Bernard Ku
//
// This program receives a number from the user. Run that number
// through an iterative and recursive function of fibonacci. Time
// the time it takes for the functions to run and then do a comparison
// of the results to display to the user.


#include <iostream>
#include <iomanip>
#include <ctime>

#include "fibRecursive.cpp"
#include "fibIterative.cpp"

using namespace std;
void speedFibRecursive(long long unsigned, int);
void speedFibIterative(long long unsigned, int);

int main ()
{
long long unsigned number = 0;
int numTrials = 0;

cout << "Enter Integer for Fibonacci: ";
cin >> number;
cout << "Enter Integer of trials for Fibonacci: ";
cin >> numTrials;

speedFibIterative(number, numTrials);
speedFibRecursive(number, numTrials);

return 0;
}

void speedFibRecursive(long long unsigned num, int trials)
{
	int sum = 0;
	
	cout << "\n***Recursive Time***\n";
	
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Iterative Time  = " << setw(5) << start << " seconds" << endl; //displays start time
	
	if (trials >0)
	{
		for (int i=0; i<trials; i++)
		{
		fibonacciRecursive(num); //calls fib Recursive and tests number of trials
		}
		
		cout << "Fibonacci number is: " << fibonacciRecursive(num) << endl;
	}
		
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Recursive Time: " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end of recursive fibonacii
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time, to get time to complete all iterative trials
	double average = (finish - start)/trials;//finds average time to complete each trial
	cout << "Time Elapsed to do Recursive: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	cout << "Average time to do Recursive trial " << trials << " times: " << setw(5) << average << " seconds" << endl; //displays average time
}

void speedFibIterative(long long unsigned num, int trials)
{
	int sum = 0;

	cout << "\n***Iterative Time***\n";
	
	cout << fixed << showpoint << setprecision (5);
	double start = double(clock()) / CLOCKS_PER_SEC; //starts timer
	cout << "Start Iterative Time  = " << setw(5) << start << " seconds" << endl; //displays start time
	
	if (trials>0)
	{
		for (int i=0; i<trials; i++)
		{
		fibonacciIterative(num); //calls fib iterative and tests number of trials
		}
		

		cout << "Fibonacci number is: " << fibonacciIterative(num) << endl;
	}
		
	double finish = double(clock()) / CLOCKS_PER_SEC;
	cout << "Finish Iterative Time  = " << setw(5) << finish << " seconds" << endl; //displays total time from beginning of program to end of iterative fibonacci
																					   
	double elapsed = (finish - start);  //Takes final time - beginning time to get time to complete all iterative trials
	double average = (finish - start)/trials;//finds average time of total trial number
	cout << "Time Elapsed to do Iterative: " << setw(5) << elapsed << " seconds" << endl; //displays elapsed time
	cout << "Average time to do Itertive trial " << trials << " times: " << setw(5) << average << " seconds" << endl; //displays average
}

