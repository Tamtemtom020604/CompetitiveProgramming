/*
PARTIAL SORT:

NOTES: 

1. Partial sort rearranges elements such that the range [first, middle] contains the sorted elements
2. The order of equal elements is not guaranted to be preserved
3. The order of remaining elements is unspecified

TYPES:
1. Can check int data types
2. Can check user defined data types
3. Can check using a function objects
4. Can check using lambda operation

look for the overload in cppref site
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
   vector <int> Vec{5,4,6,2,9,8,1,7};
   partial_sort(Vec.begin(), Vec.begin() + 4, Vec.end(), greater<int>());

   for (auto val : Vec) cout << val << " "; 
}