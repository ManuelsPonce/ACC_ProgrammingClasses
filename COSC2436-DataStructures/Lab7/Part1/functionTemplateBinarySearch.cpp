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

template <class itemType>
int binarySearch(itemType *array, int first, int last, itemType target)
{
   int index;
   if (first > last)
      index = -1; // target not in original array
   else
   {
      // If target is in anArray,
      // anArray[first] <= target <= anArray[last]
      int mid = first + (last - first) / 2;
      if (target == array[mid])
         index = mid; // target found at anArray[mid]
      else if (target < array[mid])
         // Point X
         index = binarySearch(array, first, mid - 1, target);
      else
         // Point Y
         index = binarySearch(array, mid + 1, last, target);
   }  // end if
   
   return index;
}  // end binarySearch


