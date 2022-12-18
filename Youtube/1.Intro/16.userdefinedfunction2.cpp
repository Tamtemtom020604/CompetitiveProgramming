#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

double add (double x, double y) {
    
    double result = x + y;

    return result;}

int main(){
    //functiom

    double num1, num2 ;

    cout << "Enter number 1!" << endl;
    cin >> num1;
    cout << "Enter number 2!" << endl;
    cin >> num2;

    double result = add (num1, num2);

    cout << "Your result is " << result << endl;
    
    return 0;
}