#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string cars[] = {"Corvette","Tesla","Ferrari","Audi" };

    for (int i = 0; i < size(cars); i++) {
        cout << cars[i] << endl;
    }
    
    cout << endl;
    return 0; }