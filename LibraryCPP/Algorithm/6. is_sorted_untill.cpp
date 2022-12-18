/*
IS_SORTED_UNTILL:

NOTES: 
FInds how many elements are sorted in given range [first, last)

TYPES:
1. Can check int data types
2. Can check user defined data types
3. Can check using a function objects
4. Can check using lambda operation

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> Vec{4,3,2,6,5,7,4,0,1};
    auto it = is_sorted_until(Vec.begin(), Vec.end(), greater<int>());
    auto diff = distance(Vec.begin(), it);
    cout << diff << endl;
}