
 This program diplays a main menu of options to manage a small CD  
 collection with the following options                            
       1. Read Collection                                          
       2. Display Collection                                       
       3. Sort Collection                                          
       4. Find a CD                                                
       5. Edit a CD                                                
       6. Math Break                                               
       7. Quit                                                     
                                                                   
 It will be implemented in stages.                                 
 This stage has the following optiions implemented                
       1. Display Test CD (temporary option)                       
       1. Math Break                                               
       2. Quit                                                     
                                                                   
 Math Break has its own menu                                      
       1. Even or Odd                                              
       2. Prime Number                                             
       3. Quit                                                     


#include iostream
#include iomanip
#include math.h
using namespace std;


 CD class definition                                               

class CD
{
	private
		string 	artist,			 CD artist
				title;			 CD title
		int		yearReleased;	 Year CD was released
		
	public
		 Mutators
		void setArtist(string);
		void setTitle(string);
		void setYearReleased(int);
		
		 Accessors
		string getArtist();
		string getTitle();
		int getYearReleased();
};


 CD class member functions                                         

void CDsetArtist(string a)
{
	artist = a;
}

void CDsetTitle(string t)
{
	title = t;
}

void CDsetYearReleased(int y)
{
	yearReleased = y;
}

string CDgetArtist()
{
	return artist;
}

string CDgetTitle()
{
	return title;
}

int CDgetYearReleased()
{
	return yearReleased;
}

 Function prototypes
int getMainMenuOption();
void testCD();
void mathBreak();
int getMathBreakOption();
void evenOdd();
void primeNumber();
int getPositiveInt();
int isEven(int);
int isPrime(int);

 Global Constants
const int QUIT = 3;

int main()
{
     Variable Declarations
    int option;				 option returned by function
        
	 Get the first option
    option = getMainMenuOption();
    
     Continue to display the main menu
     until user chooses to quit
    while (option != QUIT)
    {
    	switch (option)
    	{
    		case 1
    			 Math Break option
    			testCD();
    			break;
    		case 2
    			 Math Break option
    			mathBreak();
    			break;
    	}
    		
    	 Get the next option
    	option = getMainMenuOption();
    
    }  end while option is not quit
    
}  end main


 Function   getMainMenuOption                     
 Inputs     none                                  
 Outputs    a valid user option                   
 Purpose    This function displays a menu, reads  
             the user's option, validates          
             and returns it.                       
             Menu options                         
             1. Display Test CD                    
             1. Math Break                         
             2. Quit                               

int getMainMenuOption()
{
	 Variable Declarations
    int option;				 option entered by user
    
	do
	{
	     Display main menu
	    cout  nn;
	    cout  Main Menun;
	    cout  -----------n;
	    cout  1. Display Test CDn;
	    cout  2. Math Breakn;
	    cout  3. Quitn;
	    
	     Read the first option
	    cout  Option ;
	    cin  option;
	    
	     Display error message for invalid options
	    if ((option  1)  (option  QUIT))
			cout  Invalid optionnn;
			
	} while ((option  1)  (option  QUIT));
	
	return option;
	
}  end getMainMenuOption()


 Function   testCD                                
 Inputs     none                                  
 Outputs    none                                  
 Purpose    This function exercises the CD class  

void testCD()
{
	CD album;	 CD object
	
	 Set the CD member variables
	 This exercises the mutator member functions
	album.setArtist(Sepultura);
	album.setTitle(Chaos A.D.);
	album.setYearReleased(1993);
	
	 Display the CD member variables
	 This exercises the accessor member functions
	cout  n Test CD n;
	cout  Artist   album.getArtist()  endl;
	cout  Title   album.getTitle()  endl;
	cout  Year Released   album.getYearReleased()  endl;
}
    

 Function   mathBreak                             
 Inputs     none                                  
 Outputs    none                                  
 Purpose    This function displays a menu, reads  
             the user's option and plays the game. 
             Menu options                         
             1. Even or Odd                        
             2. Prime Number                       
             3. Quit                               

void mathBreak()
{	
     Variable Declarations
	int option;				 option entered by user
	
	 Get the first option
	option = getMathBreakOption();
    	
	 Check for option to quit
	while(option != 3)
	{
		switch (option)
		{
			case 1		 Even or Odd
				evenOdd();
				break;
			case 2		 Prime Number
				primeNumber();
				break;
				
		}  end switch
		
		 Get the next option	
		option = getMathBreakOption();
			
	}  end while option is not quit
		
}  end mathBreak()


 Function   getMathBreakOption                    
 Inputs     none                                  
 Outputs    a valid user option                   
 Purpose    This function displays a menu, reads  
             the user's option, validates          
             and returns it.                       
             Menu options                         
             1. Math Break                         
             2. Quit                               

int getMathBreakOption()
{
	 Variable Declarations
    int option;				 option entered by user
    
	do
	{
		 Display main menu
    	cout  nn;
		cout  Math Break Menun;
		cout  ---------------n;
    	cout  1. Even or Oddkn;
    	cout  2. Prime Numbern;
    	cout  3. Quitn;
    	
         Read the option
        cout  Option ;
    	cin  option;
    	
    	 Display error message for invalid options
    	if ((option  1)  (option  3))
			cout  Invalid optionnn;
			
	} while ((option  1)  (option  3));
	
	return option;
}  end getMathBreakOption()


 Function   evenOdd                               
 Inputs     none                                  
 Outputs    none                                  
 Purpose    This function prompts the user for a  
             positive integer and displays a       
             message identifying whether the int   
             is even or odd.                        

void evenOdd()
{
	 Variable Declarations
	int num;	 User input
	
	 Display heading for the game
	cout  n     Even or Oddn;
	cout  n;
	
	 Read first integer
    num = getPositiveInt();
    
     Continue to ask for numbers 
     until the user enters zero
    while (num  0)
    {
    	 Identify whether the number
    	 is even or odd
    	if (isEven(num))
    		cout  num   is evenn;
    	else
    		cout  num   is oddn;
    		
    	 Read next integer
    	num = getPositiveInt();
		
	}  end while number is  0
	
}  end evenOdd()


 Function   isEven                                
 Inputs     integer to be tested                  
 Outputs    1 if even, 0 if odd                   
 Purpose    This function takes one integer input 
             and determines if it is even or odd . 

int isEven(int number)
{
	 return 1(true) if number is even
	 or 0(false) if the number is odd
	return !(number % 2);
}


 Function   primeNumber                           
 Inputs     none                                  
 Outputs    none                                  
 Purpose    This function prompts the user for a  
             positive integer and displays a       
             message identifying whether the int   
             is prime or not.                       

void primeNumber()
{
	 Variable Declarations
	int num;	 User input
	
	cout  n     Prime Numbern;
	cout  n;
	
	 Read first integer
    num = getPositiveInt();
    
    while (num  0)
    {
    	 Prime numbers start at 2
    	if (num == 1)
    		cout  Prime numbers start at 2n;
    	else if (isPrime(num))
    		cout  num   is primen;
    	else
    		cout  num   is not primen;
    		
    	 Read next integer
    	num = getPositiveInt();
		
	}  end while num  0
	
}  end primeNumber()


 Function   isPrime                               
 Inputs     integer to test                       
 Outputs    1 if prime, 0 if not prime            
 Purpose    This function takes one integer input 
             and determines if it is prime or not. 

int isPrime(int number)
{
     Variable declarations
    int limit,   Upper limit for loop
        i;		 Loop control variable
    
     Set the limit for the loop -
     No need to interate through all the numbers
     between 2 and the number.
     This makes the loop more efficient.
    limit = static_castint(sqrt(number) + 1);
    
     See if any nmber between 2 and 
     the square root of the number
     evenly divides into the number
    for(i=2; (i  limit) && (number % i); i++);
    
     If 'i' reaches the value of number,
     it is prime; any value of 'i'
     less than that means it is not prime.
    return !(ilimit);
}  end isPrime()


 Function   getPositiveInt                        
 Inputs     none                                  
 Outputs    a positive integer                    
 Purpose    This function returns a positive      
             integer  0                           

int getPositiveInt()
{
	 Variable declarations
	int num;	 user input
	
	 Read integer
    cout  Enter a positive integer or 0 to quit ;
    cin  num; 
    
     Validate the input
     numbers must be 0 or larger
    while(num  0)
    {
    	cout  Invalid input; must be 0 or largern;
    	cout  Enter a positive integer or 0 to quit ;
    	cin  num;
	}  end while input is invalid
	
	 Return valid input
	return num;
	
}  end getPositiveInt()
