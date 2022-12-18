#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    // type asrraynamme [row][column]
    char keyboard [3][10] = {
        {'Q','W','E','R','T','Y','U','I','O','P'},
        {'A','S','D','F','G','H','J','K','L',';'},
        {'Z','X','C','V','B','N','M',',','.','/'}
    };
    
    cout << keyboard [0][0];
    return 0;
}