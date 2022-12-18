#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1 = {1, 2, 3, 4};
    v1.insert(v1.begin(), 5);
    cout << v1[0] << endl;

    v1.insert(v1.begin() + 1, 5);
    cout << v1[1] << endl;
}