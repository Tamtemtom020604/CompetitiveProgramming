#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* STL sort

NOTES:
1. Not only integral but user defined data can be sorted uisng this function
2. internally it uses IntroSort which is a combination of QuickSOrt, HeapSort, and InsertionSort
3. By default it uses QuickSort but if QuickSort but if QuickSort doing unfair partitioning and taking more time than N'logN time, it switches to HeapSort, and when array sizes become really small, it switches to insertion sort
4. We can use parallel execution policy for better performance

TYPES:
1. Sorting integral datatypes
2. Sorting user defined dataypes
3. Sort using function objects
4. Sort using lambda operation
*/

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
    vector <int> Vec{1,4,2,5,6,7,2,9};
    sort(Vec.begin(), Vec.end());
    for (auto elm:Vec) cout << elm << " " << endl;

    // USER DEFINED DATA TYPE
    vector <Point> Vec2{{1,2}, {3,1}, {0,1}};
    sort(Vec2.begin(), Vec2.end());
    for (auto e: Vec2) 
        cout << e.x << " " << e.y << endl;

    // USING FUNCTION OBJECT
    vector <int> Vec3{1,5,2,4,3,8,9,7};
    sort(Vec3.begin(), Vec3.end(), customless);
    for(auto elm: Vec3) {cout << elm  << " ";}
    cout << endl;


    // SORT USING LAMBDA OBJECTS
    vector <int> Vec4{1,5,2,4,3,8,9,7};
    //sort(Vec4.begin(), Vec4.end(), [](int a, int b) {return a>b;});
    sort(Vec4.begin(), Vec4.end(), greater<int>());
    for(auto elm: Vec4) {cout << elm  << " ";}
}