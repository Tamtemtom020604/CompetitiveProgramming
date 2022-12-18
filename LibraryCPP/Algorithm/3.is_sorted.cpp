/*
IS_SORTED:

NOTES:
Checks if elements in range [first, last) are sorted in non-descending order

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

class Point {
    public: 
        int x;
        int y;
        Point(int x = 0, int y = 0):x{x}, y{y} {}
        bool operator < (const Point& pl) {
            return (x+y) < (pl.x + pl.y);
        }
};

struct{
    bool operator()(int a, int b) const {return a > b;}
}customless;

int main(){

    // INT DATA TYPES
    vector <int> Vec{5,4,6,1,3,2,9,7,8};
    sort(Vec.begin(), Vec.end());
    for(auto elm: Vec) cout << elm << " ";

    cout << endl;
    (is_sorted(Vec.begin(), Vec.end())) ? cout << "Yeah":cout << "Nope";
    cout << endl;
    (is_sorted(Vec.begin(), Vec.end(), greater<int>())) ? cout << "Yeah":cout << "Nope";

}