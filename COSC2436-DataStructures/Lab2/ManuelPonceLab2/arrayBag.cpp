/* 
	Manuel Ponce 1784775
	LAb 2
	Starting with the ArrayBAg class template from chapter 3, add Union, Difference, and Intersection.
	Data Structures (Syn. 52936)
	9/21/2017
*/

//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.

/** Implementation file for the class ArrayBag.
 @file ArrayBag.cpp */

#include "ArrayBag.h"
#include <cstddef>
#include <vector>
#include "Math.h"

using namespace std;

template<class ItemType>
ArrayBag<ItemType>::ArrayBag(): itemCount(0), maxItems(DEFAULT_CAPACITY)
{
}  // end default constructor

template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const
{
	return itemCount;
}  // end getCurrentSize

template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const
{
	return itemCount == 0;
}  // end isEmpty

template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry)
{
	bool hasRoomToAdd = (itemCount < maxItems);
	if (hasRoomToAdd)
	{
		items[itemCount] = newEntry;
		itemCount++;
	}  // end if
    
	return hasRoomToAdd;
}  // end add


template<class ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& anEntry)
{
   int locatedIndex = getIndexOf(anEntry);
	bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
	if (canRemoveItem)
	{
		itemCount--;
		items[locatedIndex] = items[itemCount];
	}  // end if
    
	return canRemoveItem;
}  // end remove

template<class ItemType>
void ArrayBag<ItemType>::clear()
{
	itemCount = 0;
}  // end clear

template<class ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
{
   int frequency = 0;
   int curIndex = 0;       // Current array index
   while (curIndex < itemCount)
   {
      if (items[curIndex] == anEntry)
      {
         frequency++;
      }  // end if
      
      curIndex++;          // Increment to next entry
   }  // end while
   
   return frequency;
}  // end getFrequencyOf

template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
	return getIndexOf(anEntry) > -1;
}  // end contains

/* ALTERNATE 1: First version
template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& target) const 
{
   return getFrequencyOf(target) > 0;
}  // end contains

// ALTERNATE 2: Second version 
template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
   bool found = false;
   int curIndex = 0;        // Current array index
   while (!found && (curIndex < itemCount))
   {
      if (anEntry == items[curIndex])
      {
         found = true;
      } // end if
      
      curIndex++;           // Increment to next entry
   }  // end while   
   
   return found;
}  // end contains
*/

template<class ItemType>
std::vector<ItemType> ArrayBag<ItemType>::toVector() const
{
   std::vector<ItemType> bagContents;
	for (int i = 0; i < itemCount; i++)
		bagContents.push_back(items[i]);
      
   return bagContents;
}  // end toVector

// private
template<class ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType& target) const
{
	bool found = false;
   int result = -1;
   int searchIndex = 0;
   
   // If the bag is empty, itemCount is zero, so loop is skipped
   while (!found && (searchIndex < itemCount))
   {
      if (items[searchIndex] == target)
      {
         found = true;
         result = searchIndex;
      } 
      else
      {
         searchIndex++;
      }  // end if
   }  // end while
   
   return result;
}  // end getIndexOf



///////////////////////////
//						 //
//						 //
//						 //
//	LAB 2 Starts here    //
//						 //
//						 //
//						 //
///////////////////////////

//New Function added (bagUnion)
template<class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagUnion(const ArrayBag<ItemType>& aBag) const
{
	ArrayBag<ItemType> resultBag; //Create an empty bag
	
	int numItems;
	numItems = getCurrentSize(); //for each item in 1st bag add item to result bag
	for(int i=0; i<numItems; i++)
		resultBag.add(items[i]);
		
	numItems = aBag.getCurrentSize(); //for each item in 2nd bag add item to result bag
	for (int i=0; i<numItems; i++)
		resultBag.add(aBag.items[i]);
	
	return resultBag; 
}

//New Function Added (BagIntersection)
template<class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagIntersection(const ArrayBag<ItemType>& aBag) const
{
	ArrayBag<ItemType> resultBag; //Created an empty Bag

	for (int i=0; i<itemCount; i++)
	{
		int need = std::min(getFrequencyOf(items[i]), aBag.getFrequencyOf(items[i]));
		int haveCopies = resultBag.getFrequencyOf(items[i]);
		for(int count=haveCopies; count<need; count++)
		{
			resultBag.add(items[i]);
		}	
	}
	return resultBag;
}

//New Function Added (BagDifference)
template<class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagDifference(const ArrayBag<ItemType>& aBag) const
{
	ArrayBag<ItemType> resultBag; //Created an empty Bag

	for (int i=0; i<itemCount; i++)
	{
		int need = abs(aBag.getFrequencyOf(items[i]) - getFrequencyOf(items[i]));
		int haveCopies = resultBag.getFrequencyOf(items[i]);
		for(int count=haveCopies; count<need; count++)
		{
			resultBag.add(items[i]);
		}	
	}
	
	int numItem = aBag.getCurrentSize();
	for (int i=0; i<numItem; i++)
	{
		int need = abs(aBag.getFrequencyOf(aBag.items[i]) - getFrequencyOf(aBag.items[i]));
		int haveCopies = resultBag.getFrequencyOf(aBag.items[i]);
		for(int count=haveCopies; count<need; count++)
		{
			resultBag.add(aBag.items[i]);
		}	
	}
	
	return resultBag;
}

//BONUS Difference #2 when running
template<class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagDifferenceBonus(const ArrayBag<ItemType>& aBag) const
{
	ArrayBag<ItemType> resultBag; //Created an empty Bag

	for (int i=0; i<itemCount; i++)
	{
		int need = abs(aBag.getFrequencyOf(items[i]) - getFrequencyOf(items[i]));
		int haveCopies = resultBag.getFrequencyOf(items[i]);
		for(int count=haveCopies; count<need; count++)
		{
			resultBag.add(items[i]);
		}	
	}
	
	int numItem = aBag.getCurrentSize();
	for (int i=0; i<numItem; i++)
	{
		int need = abs(aBag.getFrequencyOf(items[i]) - getFrequencyOf(items[i]));
		int haveCopies = resultBag.getFrequencyOf(items[i]);
		for(int count=haveCopies; count<need; count++)
		{
			resultBag.add(items[i]);
		}	
	}
	
	return resultBag;
}

//Bonus UNION
template<class ItemType>
ArrayBag<ItemType> ArrayBag<ItemType>::bagUnionBonus(const ArrayBag<ItemType>& aBag) const
{
{
	ArrayBag<ItemType> resultBag; //Create an empty bag
	
	int numItems;
	numItems = getCurrentSize(); //for each item in 1st bag add item to result bag
	for(int i=0; i<numItems; i++)
		resultBag.add(items[i]);
		
	numItems = aBag.getCurrentSize(); //for each item in 2nd bag add item to result bag
	for (int i=0; i<numItems; i++)
	{
		if (resultBag.getFrequencyOf(aBag.items[i])<1)
			resultBag.add(aBag.items[i]);
	}
	
	return resultBag; 
}
}

