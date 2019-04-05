//MANUEL PONCE EXAM 3 PROGRAM
//GRADE: 80

#include <iostream>
using namespace std;

//Sandwich  Class Decleration 
class Sandwich
{
	private:
		string name;
		int ingredientsNum;
		string *ingredient;

		
	public:
		//Mutators
		Sandwich();
		void setName(string);
		void setIngredientsNum(int);
		void setIngredient(string, int);
		
		
		//Accessors
		string getName();
		int getIngredientsNum();
		string getIngredient(int p);

		
};

void Sandwich::setName(string n)
{
	name = n;
}
void Sandwich::setIngredientsNum(int i)
{
	ingredientsNum = i;
	ingredient = new string[ingredientsNum];
}
void Sandwich::setIngredient(string k, int p)
{
	*ingredient = k;
	k = ingredient[p];
	
}
string Sandwich::getName()
{
	return name;
}
int Sandwich::getIngredientsNum()
{
	return ingredientsNum;
}
string Sandwich::getIngredient(int p)
{
	return ingredient[p];
}
Sandwich::Sandwich()
{
	ingredientsNum = 0; 
	name = "";
	ingredient = NULL;
}

//PROTOTYPES
void fillSandwich(Sandwich *subway);
void displaySandwich(Sandwich subway);


int main()
{
	
	int numPeople;
	
	cout << "Enter number of Sandwiches: ";
	cin >> numPeople;
	cin.ignore(100, '\n');
	
	Sandwich sandwich[numPeople];
	
	for (int i = 0; i < numPeople; i++)
	{
		fillSandwich(&sandwich[i]);
	}
	
	for (int i = 0; i < numPeople; i++)
	{
		displaySandwich(sandwich[i]);
	}


    return 0;    
}

void fillSandwich(Sandwich *subway)
{
	string 	name;
	int numIngredients;
	string	ingredient;
	
	cout << endl;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter number of ingredients: ";
	cin >> numIngredients;
	cin.ignore(100, '\n');
	subway->setName(name);
	subway->setIngredientsNum(numIngredients);
	
	for (int i=0; i<numIngredients; i++)
	{
		cout << "Enter ingredient #" << i+1 << " : ";
		getline(cin, ingredient);
		subway->setIngredient(ingredient, i);
	}

}


//COULD NOT FIGURER OUT WHY IT WOULD SKIP THE INGREDIENTS
//WHEN DISPLAYING AND ONLY DISPLAY LAST
//NOT SURE IF IT WAS THE FOR LOOP I USED
void displaySandwich(Sandwich subway)
{
	cout << "\n***SANDWICH INFO***\n";
	cout << "Name: " << subway.getName() << endl;
	cout << "Number of ingredients: " << subway.getIngredientsNum() << endl;
	cout << "Ingredients: " << endl;
	for (int i=0; i<subway.getIngredientsNum(); i++)
		cout << "	" << subway.getIngredient(i) << endl;
}
