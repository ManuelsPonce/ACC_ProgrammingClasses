/* 
	Manuel Ponce 1784775
	LAb 2
	Starting with the ArrayBAg class template from chapter 3, add Union, Difference, and Intersection.
	Data Structures (Syn. 52936)
	9/21/2017
*/

//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Header file for an array-based implementation of the ADT bag.
 @file ArrayBag.h */

#ifndef ARRAY_BAG_
#define ARRAY_BAG_

#include "BagInterface.h"

template<class ItemType>
class ArrayBag : public BagInterface<ItemType>
{
private:
	static const int DEFAULT_CAPACITY = 10; // Small size to test for a full bag
	ItemType items[DEFAULT_CAPACITY];      // Array of bag items
   int itemCount;                         // Current count of bag items 
   int maxItems;                          // Max capacity of the bag
   
   // Returns either the index of the element in the array items that
   // contains the given target or -1, if the array does not contain 
   // the target.
   int getIndexOf(const ItemType& target) const;   

public:
	ArrayBag();
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add(const ItemType& newEntry);
	bool remove(const ItemType& anEntry);
	void clear();
	bool contains(const ItemType& anEntry) const;
	int getFrequencyOf(const ItemType& anEntry) const;
   std::vector<ItemType> toVector() const;
   
   
   ArrayBag<ItemType> bagUnion(const ArrayBag<ItemType>& aBag) const; //Added
   ArrayBag<ItemType> bagIntersection(const ArrayBag<ItemType>& aBag) const; //Added
   ArrayBag<ItemType> bagDifference(const ArrayBag<ItemType>& aBag) const; //added
   ArrayBag<ItemType> bagDifferenceBonus(const ArrayBag<ItemType>& aBag) const; //Bonus added
   ArrayBag<ItemType> bagUnionBonus(const ArrayBag<ItemType>& aBag) const; //Bonus added
}; // end ArrayBag

#include "ArrayBag.cpp"
#endif
