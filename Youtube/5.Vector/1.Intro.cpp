#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> v1 = {1, 2, 3, 4};
    cout << v1[1] << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    cout << v1.size() << endl;
    v1.push_back(9);
    cout << v1.size() << endl; // How many values a vector currently hold
    cout << v1.capacity() << endl; // How many values a vector can currently hold
    v1.pop_back(); // return the last value remove it from a vector. The capacity will still the same
    v1.shrink_to_fit(); // shrink the capacity to fit the value
    
}