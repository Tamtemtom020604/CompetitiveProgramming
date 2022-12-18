#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){

    // INT DATA TYPE
    vector <int> Vec{4,3,5,2,6,1};
    vector <int> :: iterator it = find(Vec.begin(), Vec.end(), 4);
    (it == Vec.end()) ? cout << "Not Found" << endl : cout << "Found" << endl;

    
}