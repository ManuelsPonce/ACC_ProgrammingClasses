#include<iostream>
	#include<string>
	using namespace std;

	template<typename T>
	void print_mydata(T output)
	{
		cout << "Output value: " << output << endl;
	}

	int main()
	{
		int i=5;
		double d=5.5;
		string s("Hello World");
		bool b=true;

		print_mydata(i); // T is int
		print_mydata(d); // T is double
		print_mydata(s); // T is string
		print_mydata(b); // T is bool
		return 0;
	}
