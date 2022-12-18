#include <iostream>
using namespace std;

int main(){
    // nested loop is essentially a loop inside of another loop
    char symbol;
    int width, height;
    
    cout << "Enter a symbol" << endl;
    cin >> symbol;

    cout << "Enter the width" << endl;;
    cin >> width;

    cout << "Enter the height" << endl;
    cin >> height;
    
    for (int i = 0; i < height ; i++) { 
        for (int j = 0 ; j < width ; j++) {
        cout << symbol;}
        cout << endl;}
    return 0;
}