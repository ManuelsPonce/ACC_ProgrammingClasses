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
/*
ALGORITHM:
    This program receives an whole number (+ or -)
    Pass that number through both an iterative and recursive algorithm of Fibonacci.
    Time the start before the function call of each respective function.
    End the timer once each function has finished running through.
    Take the difference between the corresponding end and start time and compare the two.
    The program will then display the result.
*/
#include <iostream>     //Including standard library for input/output
#include <iomanip>
#include <ctime>
#include "math.h"

//Declaring Functions
long long int fibonacciIterative(long long int);    //Initializing Iterative function
long long int fibonacciRecursive(long long int);    //Initializing Recursive function
long long int power (int num, long long int power); //Initializing power function

//Start of main()
int main()
{
    int sum = 0;
    std::cout << std::fixed << std::showpoint << std::setprecision(5);

    double start = double(clock()) / CLOCKS_PER_SEC;
    double finish, recElapsed, iteElapsed;

    //Declaring variables
    long long int fibNumber;   //To hold the user inputted fibonacci number

    //Getting user input for the fibonacci
    std::cout << "Enter any (+ or -) integer: ";    //Asking user to enter either a positive or negative value
    std::cin >> fibNumber;                          //Setting that number to fibNumber to run through the functions

    std::cout <<std::endl<< "Start Time  =" << std::setw(5) << start << " seconds" << std::endl;
    //Sending the inputted value to the recursive and iterative functions to return the fibonacci number
    std::cout << "Iterative Fibonacci number is: " << fibonacciIterative(fibNumber) << std::endl;
    finish = double(clock()) / CLOCKS_PER_SEC;
    std::cout << "Finish Time  =" << std::setw(5) << finish << " seconds" << std::endl;
    iteElapsed = finish - start;
    std::cout << "Time Elapsed =" << std::setw(5) << iteElapsed << " seconds" << std::endl<<std::endl;

    std::cout << "Start Time  =" << std::setw(5) << start << " seconds" << std::endl;
    //Sending the inputted value to the recursive and iterative functions to return the fibonacci number
    std::cout << "Recursive Fibonacci number is: " << fibonacciRecursive(fibNumber) << std::endl;
    finish = double(clock()) / CLOCKS_PER_SEC;
    std::cout << "Finish Time  =" << std::setw(5) << finish << " seconds" << std::endl;
    recElapsed = finish - start;
    std::cout << "Time Elapsed =" << std::setw(5) << recElapsed << " seconds" << std::endl;

    if (recElapsed < iteElapsed)
        std::cout<<std::endl<<"Recursive is faster than Iterative @ Fibonacci: "<<fibNumber<<" by "<<std::setw(5)
                 <<recElapsed-iteElapsed<<" seconds."<<std::endl;
    else if (recElapsed > iteElapsed)
        std::cout<<std::endl<<"Iterative is faster than Recursion @ Fibonacci: "<<fibNumber<<" by "<<std::setw(5)
                 <<iteElapsed-recElapsed<<" seconds."<<std::endl;
    else
        std::cout<<"Recursive and Iterative are the same # Fibonacci: "<<fibNumber<<std::endl;

}   //End of main()

//Recursive Fibonacci Function
long long int fibonacciRecursive(long long int fibNum)
{
    //Declaring variables to hold the sum of the fibonacci calculation
    long long int fibSum;

    //If the entered value is between 2 and -1, return 1
    if (fibNum <= 2&&fibNum>=-1)
        return 1;

    //if value entered is 2, return -1
    else if (fibNum==-2)
        return -1;

    /*if the entered value is less than -2 then we will run a recursive fibonacci and store it then
      multiply the stored value by -1 to the power of the entered value*/
    else if (fibNum<-2)
    {
        //Getting the regular fibonacci value from the passed value and storing it in fibSum
        fibSum = fibonacciRecursive(abs(fibNum) - 1) + fibonacciRecursive(abs(fibNum) - 2);
        //Returning the stored multiplied but the -1 to the power of the initial passed value
        return power(-1, abs(fibNum))*fibSum;
    }

    //If the entered value is greater than 2 then we will do standard recursive fibonacci
    else
        return (fibonacciRecursive(fibNum - 1) + fibonacciRecursive(fibNum - 2));
}//end of recursive fibonacci

//Iterative Fibonacci Function
long long int fibonacciIterative(long long int fibNum)
{
    //Declaring variables
    /* fiboSum to hold the sum of the fibonacci function
     * currentFibo is used in the iterative loop to hold the current value of Fibonacci being used
     * previousFibo will be used to mimic F(n-1) in the fibonacci loop
     * fiboHolder is used in the negative fibonacci loop to hold the result of the fibonacci loop
     * exponent will hold the result of the power function in the negative fibonacci
     */
    long long int fiboSum = 1, currentFibo = 1, previousFibo=1, fiboHolder=1, exponent;

    //If fibNum is between -1 and 2, return 1
    if (fibNum <= 2 && fibNum>=-1)
        return 1;

    //If fibNum is -2, return -1
    else if (fibNum==-2)
        return -1;

    //if fibNum is less than -2, do the negative fibonacci iterative loop
    else if(fibNum<-2)
    {
        //Initializing a variable to hold the absolute value of a function
        long long int numOfFibo = abs(fibNum);

        //Getting the standard positive fibonacci to later use.
        for (int i = 3; i <= numOfFibo; i++)
        {
            //Standard formula for iterative fibonacci is F(n) = F(n-1)+F(n-2)
            fiboHolder = (currentFibo) + (previousFibo);    //Will be acting as the placeholder for F(n)
            previousFibo = currentFibo;                     //F(n-1), Will take the previous value of currentFibo F(n-2)
            currentFibo= fiboHolder;                        //F(n-2), Takes the previous value of fiboHolder F(n)
        }//end of for loop

        //Getting the value of -1 to the power of the absolute value of fibNum
        exponent = power(-1, abs(fibNum));

        //multiplying exponent and fiboHolder together to get the negative fibonacci
        fiboSum = exponent*fiboHolder;

        //Returning the fiboSum to the calling function
        return fiboSum;
    }

    //Standard iterative positive Fibonacci
    else
    {
        //Start of iterative Fibonacci for loop
        for (int i = 3; i <= fibNum; i++)
        {
            //Standard formula for iterative fibonacci is F(n) = F(n-1)+F(n-2)
            fiboSum = (currentFibo) + (previousFibo);    //Will be acting as the placeholder for F(n)
            previousFibo = currentFibo;                  //F(n-1), Will take the previous value of currentFibo F(n-2)
            currentFibo= fiboSum;                        //F(n-2), Takes the previous value of fiboHolder F(n)
        }//end of iterative for loop

        //Returning the fibonacci value to the calling function
        return fiboSum;
    }
}//End of iterative fibonacci function

//Power function
long long int power(int number,long long int exponent)
{
    //Declaring variables
    long long int value=number; //Value to hold the starting value

    //If the passed exponent is 0, return 1
    if (exponent == 0)
        return 1;

    //If the exponent is not 0
    else if (abs(exponent) > 0)
    {
        //For loop for standard exponent calculation
        for (int i = 0; i < abs(exponent); i++)
        {
            //Multiply the base number by itself for each instance of the for loop.
            value = number * value;
        }
    }

    //return the value from the exponent loop to the calling function
    return value;

}//end of power function
