// Author:                      Manuel Ponce
// Assignment Number:           Lab 4
// File Name:                   Lab4_ManuelPonceDriver.cpp
// Course/Section:              COSC 1337 Section 52936
//Instructor: 					Bernard Ku  
// Date:                        10/26/2017

//https://gist.github.com/mycodeschool/7702441
//https://codereview.stackexchange.com/questions/75223/stack-without-use-of-stl-version-1-0

#include <iostream>
#include "ArrayStack.h"
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

//Function Prototype
bool isOper(char);
bool isInt(char);
int doOperations(char, int, int);
int evaluateInput(string, bool&);

int main()
{
	string postFixInput;
	char userInput;
	bool emptyStack;
	int result;
	
	do
	{	
	cout << "Enter a Postfix expression: ";
	getline(cin, postFixInput);
	result = evaluateInput(postFixInput, emptyStack);

	if (emptyStack)
		cout << "Result from postfix expression: " << result << endl;
		
	cout << "Again? (Y/N): ";
	cin >> userInput;
	cin.ignore(100, '\n');

	}while((userInput == 'Y') || (userInput == 'y'));
	
	cout << "Goodbye 07\n";
	
	
	return 0;
}

bool isInt(char c) 
{
	if(c >= '0' && c <= '9')
		return true;
		
	return false;
}

bool isOper(char c)
{
	if(c == '+' || c=='-' || c=='*' || c=='/')
		return true;
	
	return false;
}

int doOperations(char operation, int operOne, int operTwo)
{
	if(operation == '+') return operOne +operTwo;
	else if(operation == '-') return operOne - operTwo;
	else if(operation == '*') return operOne * operTwo;
	else if(operation == '/') return operOne / operTwo;

	else cout<<"Error\n";
	return -1;
}

int evaluateInput(string input, bool & stackEmpty)
{
	ArrayStack<int> items;
	stackEmpty = true;
	
	for(int i=0;i< input.length();i++)
	{
		if(input[i] == ' ' ) continue; 
		
		else if(isOper(input[i]))
		{
			if(items.isEmpty())
			{
				stackEmpty = false;
				cout << "Invalid Postfix\n";
				return -1;
			}
			int operTwo = items.peek();
			items.pop();
			
			if(items.isEmpty())
			{
				stackEmpty = false;
				cout << "Invalid Postfix\n";
				return -1;
			}
			int operOne = items.peek();
			items.pop();

			int result = doOperations(input[i], operOne, operTwo);
			items.push(result);

		}
		
		else if(isInt(input[i]))
		{
			int oper=0;
			
			while(i<input.length() && isInt(input[i]))
			{
				oper = (oper*10) + (input[i] - '0');
				i++;
			}
			
			i--;
			
			items.push(oper);
		}
		
		else if ((input[i] == '%') || (input[i] == '^'))
		{
				cout << "Invalid operator\n";
				stackEmpty = false;
		}
		
		else 
		{
			cout << "Invalid character\n";
			stackEmpty = false;
		}
	}
	
	int temp = items.peek();
	items.pop();
	if(!items.isEmpty())
	{
		stackEmpty = false;
		//out << "ERROR!: Invalid Postfix\n";
	}
	
	return temp;
}
