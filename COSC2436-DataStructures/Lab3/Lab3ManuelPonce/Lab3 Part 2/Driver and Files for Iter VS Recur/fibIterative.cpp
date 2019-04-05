#include <iostream>
using namespace std;

//long long fibonacciIterative(long long);

// int main()
//{
//    string option;
//    long long fibNumber;
//
//    cout << "Enter a positive integer: ";
//    cin >> fibNumber;
//    cin.ignore(100, '\n');
//
//    while (fibNumber<=0)
//    {
//        cout << "Please enter a positive: ";
//        cin >> fibNumber;
//        cin.ignore(100, '\n');
//    }
//
//    cout << "Fibonacci number is: " << fibonacciIterative(fibNumber) << endl;
//}

long long unsigned fibonacciIterative(long long unsigned fibNum) 
{
    //Using this value to hold positive only, may be changed if the negative portion is introduced.
    long long unsigned fiboSum = 1, currentFibo = 1, previousFibo=1;
    //If fibNum is 1 or 2 then it is set to 1
    if (fibNum <= 2)
        return 1;

    //Iterative Form of Fibonacci
    else
    {
        for (int i = 3; i <= fibNum; i++)
        {
            fiboSum = (currentFibo) + (previousFibo);
            previousFibo = currentFibo;
            currentFibo= fiboSum;
        }
        return fiboSum;
    }
}


