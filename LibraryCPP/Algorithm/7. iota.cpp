/*
IOTA:
Fill the range [first, last) with sequentially increasing values,
starting with values and repetitively evaluating ++values
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>
using namespace std;

int main(){

    list <int> lst(10);
    iota(lst.begin(), lst.end(), 0);

    for (auto elm: lst) cout << elm << " ";
    cout << endl;

    vector <list <int>::iterator> Vec(lst.size());
    iota(Vec.begin(), Vec.end(), lst.begin());

    for(auto elm: Vec) cout << *elm << " ";
    return 0;
}