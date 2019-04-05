#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
#include<iterator>

template<typename iterator>
iterator binarySearch(iterator begin, iterator end, int target){
    iterator start = begin;
    iterator stop = end;
    while( start != stop){
            int distance = std::distance(start,stop);
            iterator middle = begin;
            std::advance(middle, distance/2);
            if(*middle == target){
                    return middle;
            }
            else if(*middle < target){
                    start = std::advance(middle,1);
            }
            else{
                    stop = middle;
            }
    }
    return end;
