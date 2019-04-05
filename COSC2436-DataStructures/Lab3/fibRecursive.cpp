#include <iostream>
using namespace std;

//long long fibonacciRecursive(long long);

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
//    cout << "Fibonacci number is: " << fibonacciRecursive(fibNumber) << endl;	
//}

long long fibonacciRecursive(long long fibNum) 
{
    if (fibNum < 2)
		return fibNum;
    
    else
    	return (fibonacciRecursive(fibNum - 1) + fibonacciRecursive(fibNum - 2));
}
