#include <iostream>
using namespace std;

int main(){
    //Declare pointer and referencing

    int x = 5;
    int& refx = x;
    int* px = &x;

    //reading

    cout << x << endl;
    cout << refx << endl;
    cout << *px << endl;

    //Writing

    refx = 6;
    *px = 7;

    //reference can't reference something else, but pointer can
    
    int y = 10;
    //int& refx = y;

    cout << refx << endl;

    return 0;
}