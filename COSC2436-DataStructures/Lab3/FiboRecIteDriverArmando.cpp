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
    This program receives an whole number (+)
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
long long unsigned int fibonacciIterative(long long int);    //Initializing Iterative function
long long unsigned int fibonacciRecursive(long long int);    //Initializing Recursive function

//Start of main()
int main()
{
    int sum = 0;
    std::cout << std::fixed << std::showpoint << std::setprecision(5);

    double finish, recElapsed, iteElapsed;

    //Declaring variables
    long long int fibNumber;   //To hold the user inputted fibonacci number

    //Getting user input for the fibonacci
    std::cout << "Enter any positive integer: ";    //Asking user to enter either a positive or negative value
    std::cin >> fibNumber;                          //Setting that number to fibNumber to run through the functions

    //While loop to prevent any negative numbers from being entered.
    while (fibNumber<0)
    {
        //Getting user input for the fibonacci
        std::cout << "Enter any positive integer: ";    //Asking user to enter either a positive or negative value
        std::cin >> fibNumber;                          //Setting that number to fibNumber to run through the functions
    }//end of while loop

    //Running and timing the iterative Fibonacci function
    //Starting the timer and outputting the time
    double start = double(clock()) / CLOCKS_PER_SEC;//To hold the time at the start of the algorithm

    //Outputting the start time
    std::cout <<std::endl<< "Start Time  =" << std::setw(5) << start << " seconds" << std::endl;

    //Sending the inputted value to the iterative functions to return the fibonacci number
    std::cout << "Iterative Fibonacci number is: " << fibonacciIterative(fibNumber) << std::endl;

    //Storing the finish time
    finish = double(clock()) / CLOCKS_PER_SEC;

    //Outputting the finish time
    std::cout << "Finish Time  =" << std::setw(5) << finish << " seconds" << std::endl;

    //Finding the elapsed time by taking the difference between finish and start
    iteElapsed = finish - start;

    //Doing the time calculations for recursive
    //Starting the timer and outputting the time
    start = double(clock()) / CLOCKS_PER_SEC;//To hold the time at the start of the algorithm

    //Outputting the start time
    std::cout <<std::endl<< "Start Time  =" << std::setw(5) << start << " seconds" << std::endl;

    //Sending the inputted value to the recursive functions to return the fibonacci number
    std::cout << "Recursive Fibonacci number is: " << fibonacciRecursive(fibNumber) << std::endl;

    //Storing the finish time
    finish = double(clock()) / CLOCKS_PER_SEC;

    //Outputting the finish time
    std::cout << "Finish Time  =" << std::setw(5) << finish << " seconds" << std::endl;

    //Finding the elapsed time by taking the difference between finish and start
    recElapsed = finish - start;

    std::cout<<std::endl<<"Iterative time: "<<std::setw(5)<<iteElapsed<<" seconds"<<std::endl;
    std::cout<<std::endl<<"Recursive time: "<<std::setw(5)<<recElapsed<<" seconds"<<std::endl;	
    
    if (recElapsed < iteElapsed)
        std::cout<<std::endl<<"Recursive is faster than Iterative @ Fibonacci: "<<fibNumber<<" by "<<std::setw(5)
                 <<iteElapsed-recElapsed<<" seconds."<<std::endl;
    else if (recElapsed > iteElapsed)
        std::cout<<std::endl<<"Iterative is faster than Recursion @ Fibonacci: "<<fibNumber<<" by "<<std::setw(5)
                 <<recElapsed-iteElapsed<<" seconds."<<std::endl;
    else
        std::cout<<"Recursive and Iterative are the same # Fibonacci: "<<fibNumber<<std::endl;

}   //End of main()

//Recursive Fibonacci Function
long long unsigned int fibonacciRecursive(long long int fibNum)
{
    //if entered value is 0, return 0
    if (fibNum == 0)
        return 0;
        //if fibNum is less than or equal to 2, return 1
    else if (fibNum <= 2)
        return 1;

        //If the entered value is greater than 2 then we will do standard recursive fibonacci
    else
        return (fibonacciRecursive(fibNum - 1) + fibonacciRecursive(fibNum - 2));
}//end of recursive fibonacci

//Iterative Fibonacci Function
long long unsigned int fibonacciIterative(long long int fibNum)
{
    //Declaring variables
    /* fiboSum to hold the sum of the fibonacci function
     * currentFibo is used in the iterative loop to hold the current value of Fibonacci being used
     * previousFibo will be used to mimic F(n-1) in the fibonacci loop
     */
    long long unsigned int fiboSum = 1, currentFibo = 1, previousFibo=1; 

    //if entered value is 0, return 0
    if (fibNum == 0)
        return 0;

    //if fibNum is less than or equal to 2, return 1
    else if (fibNum <= 2)
        return 1;

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
