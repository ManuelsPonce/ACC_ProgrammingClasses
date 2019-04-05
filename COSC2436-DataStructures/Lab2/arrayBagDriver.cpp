/* 
	Manuel Ponce 1784775
	LAb 2
	Starting with the ArrayBAg class template from chapter 3, add Union, Difference, and Intersection.
	Data Structures (Syn. 52936)
	9/21/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include "ArrayBag.h"

using namespace std;

//void bagTester(ArrayBag<int>& bag);
void displayBag(ArrayBag<int>& bag)
{
	cout << "This bag contains " << bag.getCurrentSize() << " items: ";
	std::vector<int> bagItems = bag.toVector();
   
   int numberOfEntries = (int) bagItems.size();
   for (int i = 0; i < numberOfEntries; i++)
   {
    	cout << bagItems[i] << " ";
   }  
		cout << std::endl << std::endl;
}  

int main()
{
	ArrayBag<int> firstBag, secondBag, resultBag;

	int items [] = {1,2,3,4,5,6,7};
	int itemsTwo [] = {1,2,3};
	
	//Adding contents to Bag1
	for (int i = 0; i < 7; i++)
	{
		firstBag.add(items[i]);
	}
	
	//Adding contents to bag2
	for (int i = 0; i < 3; i++)
	{
		secondBag.add(itemsTwo[i]);
	}
	
	//Displaying contents of both bags
	displayBag(firstBag);
	displayBag(secondBag);
	cout << endl;
	
	//testing Union
	cout << "---UNION\n";
	resultBag = firstBag.bagUnion(secondBag);
	displayBag(resultBag);
	resultBag.clear();
	
	//Testing Bonus Union
	cout << "---BONUS UNION\n";
	resultBag = firstBag.bagUnionBonus(secondBag);
	displayBag(resultBag);
	resultBag.clear();
	
	//Testing Intersection
	cout << "---INTERSECTION\n";
	resultBag = firstBag.bagIntersection(secondBag);
	displayBag(resultBag);
	resultBag.clear();
	
	//Testing Difference
	cout << "---DIFFERENCE (BAG A - BAG B)\n";
	resultBag = firstBag.bagDifference(secondBag);
	displayBag(resultBag);
	resultBag.clear();
	
	//Testing Bonus Difference
	cout << "---BONUS Difference (BAG B - BAG A)\n";
	cout << "***Wouldn't'(Bag A - Bag B) be the same as (Bag B - Bag A)?\n";
	cout << "***Becuase you are comparing what they don't have in common.\n";
	resultBag = secondBag.bagDifference(firstBag);
	displayBag(resultBag);
	resultBag.clear();
	
	//Testing Bonus Difference one like example
	cout << "---BONUS Difference #2 (BAG B - BAG A)\n";
	resultBag = secondBag.bagDifferenceBonus(firstBag);
	displayBag(resultBag);
	resultBag.clear();
	
	return 0;
}
	
