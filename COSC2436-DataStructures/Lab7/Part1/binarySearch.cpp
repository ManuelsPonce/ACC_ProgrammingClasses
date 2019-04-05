//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2016 __Pearson Education__. All rights reserved.

/** Searches the array anArray[first] through anArray[last]
    for a given value by using a binary search.
 @pre  0 <= first, last <= SIZE - 1, where SIZE is the
    maximum size of the array, and anArray[first] <=
    anArray[first + 1] <= ... <= anArray[last].
 @post  anArray is unchanged and either anArray[index] contains
    the given value or index == -1.
 @param anArray  The array to search.
 @param first  The low index to start searching from.
 @param last  The high index to stop searching at.
 @param target  The search key.
 @return  Either index, such that anArray[index] == target, or -1.
*/

#include <iostream>
#include <string>

using namespace std;

int binarySearch(const int anArray[], int first, int last, int target)
{
   int index;
   if (first > last)
      index = -1; // target not in original array
   else
   {
      // If target is in anArray,
      // anArray[first] <= target <= anArray[last]
      int mid = first + (last - first) / 2;
      if (target == anArray[mid])
         index = mid; // target found at anArray[mid]
      else if (target < anArray[mid])
         // Point X
         index = binarySearch(anArray, first, mid - 1, target);
      else
         // Point Y
         index = binarySearch(anArray, mid + 1, last, target);
   }  // end if
   
   return index;
}  // end binarySearch

//int main()
//{  
//   int searchIntArray[] = {1, 5, 9, 12, 15, 21, 29, 31};
//   cout << "Searching for 9: binarySearch returns "
//        << binarySearch(searchIntArray, 0, 7, 9) << "; should be 2" << endl;
//   
//   cout << "Searching for 6: binarySearch returns "
//        << binarySearch(searchIntArray, 0, 7, 6) << "; should be -1 - NOT FOUND" << endl;
//   cout << endl;
//   
// 
//   
//   return 0;
//}
