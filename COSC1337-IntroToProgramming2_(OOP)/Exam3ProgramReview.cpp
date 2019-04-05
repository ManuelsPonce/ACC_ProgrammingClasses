#include <iostream>

using namespace std;

class Student
{
	private:
		string 	name,
				course;
		int numTests;
		float *scores;
	
	public:
		void set_name(string n) {name = n;}
		void set_course(string c) {course = c;}
		void set_numTests(int n) 
		{
			numTests = n;
			scores = new float[numTests];
		}
		void set_score(float s, int p) {scores[p] = s;}
		
		string get_name() {return name;}
		string get_course() {return course;}
		int get_numTests() {return numTests;}
		float get_score(int p) {return scores[p];}
	
};

void fillOneStudent(Student*);
void displayOneStudent(Student);

int main()
{
	int numStudent;
	
	cout << "Enter number of students: ";
	cin >> numStudent;
	
	Student students[numStudent];
	
	for (int i = 0; i < numStudent; i++)
	{
		fillOneStudent(&students[i]);
	}
	
	for (int i = 0; i < numStudent; i++)
	{
		displayOneStudent(students[i]);
	}	
	
	return 0;
}

void fillOneStudent(Student *genius)
{
	string 	name,
			course;
	int 	numTests;
	float	score;
	
	cin.ignore(100, '\n');
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter favorite course: ";
	getline(cin, course);
	cout << "Enter number of tests: ";
	cin >> numTests;
	genius->set_name(name);
	genius->set_course(course);
	genius->set_numTests(numTests);
	
	for (int i=0; i<numTests; i++)
	{
		cout << "Enter score #" << i+1 << " : ";
		cin >> score;
		genius->set_score(score, i);
	}	
}

void displayOneStudent(Student genius)
{
	cout << "Name: " << genius.get_name() << endl;
	//cout << "Favorite course: " << genius.get_course() << endl;
	cout << "Number of Tests: " << genius.get_numTests() << endl;
	cout << "Test scores: " << endl;
	for (int i=0; i<genius.get_numTests(); i++)
		cout << "   " << genius.get_score(i) << endl;
		
}
