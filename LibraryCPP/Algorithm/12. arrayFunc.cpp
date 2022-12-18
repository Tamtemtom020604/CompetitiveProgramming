#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    /*
    all_of()

    This function operates on whole range of array elements and can save time to run a loop to check each elements one by one. It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.
    */

     // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};
  
    // Checking if all elements are positive
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";
    cout << endl;
    /*
    any_of()

    This function checks for a given range if there’s even one element satisfying a given property mentioned in function. Returns true if at least one element satisfies the property else returns false.
    */
  
    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";
    cout << endl;

    /*
    none_of()

    This function returns true if none of elements satisfies the given condition else returns false.
    */

    // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";


    return 0;
}