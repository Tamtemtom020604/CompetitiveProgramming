/* 
NTH_ELEMENT*:

NOTES:
1. Nth element is partial sorting algorithm taht rearranges element in [first, last) such that*:
    a. the element at the nth position is the one which should be at the positionif we sorted the list
    b. It does not sort the list, just that all elements, which precede the nth element are not greater than it, and all the elements after it are not less than it.
2. Nth element algorithnm is implemented using introselect.
    a. Introselect is a hybrid of quickselect and median of median algorithm
        1. Quickselect is used to find the smallestnumber in unsorted array.
        2. Median of median is a median selection algorthm for better pivot selection mainly used in quickselect

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
    vector <int> Vec{3,1,4,6,2,9,7,8,5};

    nth_element(Vec.begin(), Vec.begin() + Vec.size()/2, Vec.end());
    for(auto elm : Vec) cout << elm << " "; 
    cout << endl << "The median is : " << Vec[Vec.size()/2] << endl;

    nth_element(Vec.begin(), Vec.begin() + Vec.size()/2, Vec.end(), greater<int>());
    for(auto elm : Vec) cout << elm << " "; 
    //cout << endl << "The median is : " << Vec[Vec.size()/2] << endl;

    return 0;
}
    