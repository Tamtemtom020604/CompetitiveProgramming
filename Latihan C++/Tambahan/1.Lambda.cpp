/*
LAMBDA:
The way to create a function without actually create. The disposable function
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ForEach(const vector<int>& values, void(*func)(int)){
    for(int value : values) func(value);}

int main(){
    vector <int> values = {1,5,4,2,3};
    auto lambda = [](int value) {cout << "Value : " << value << endl;};
    ForEach(values, lambda);
    cin.get();
}