#include<iostream>
using namespace std;

bool isMember(int[], int, int, int);

const int SIZE = 10;

int main()
{
int num[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

int numb;

int result;

cout << " Enter the number you would like to search for " << endl;
cin >> numb;

result = isMember(num, 0, SIZE - 1, numb);

if (result == -1)
cout << " The number does not exist in the array " << endl;
else
{
cout << " That number is found in the elemenent " << result;
cout << " in the array " << endl;
}

system("pause");
return 0;

}

bool isMember(int array[], int first, int last, int value)
{
int middle;

if (first > last)
return -1;
middle = (first + last) / 2;
if (array[middle] == value)
return middle;
if (array[middle] < value)
return isMember(array, middle + 1, last, value);
else
return isMember(array, first, middle - 1, value);
}

