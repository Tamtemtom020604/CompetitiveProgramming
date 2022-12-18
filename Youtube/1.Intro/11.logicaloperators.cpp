#include <iostream>
using namespace std;

int main(){
    // (&&) AND operator, both condition have to be true
    // || OR operator, only one condition have to be true
    // ! NOT operator
    
    double temp1;

    cout << "What is your temperature?" << endl;
    cin >> temp1;

    if (temp1>=30 && temp1 <=40) 
    {cout << "You are probably fine" << endl;}
    else {cout << "GO TO HOSPITALS!" << endl;}

    double temp2;
    
    cout << "What is your friend temperature?" << endl;
    cin >> temp2;

    if (!temp2 <=30 || !temp2 >= 40 )
    {cout << "BRING YOUR FRIEND TO HOSPITAL" << endl;}
    else {cout << "Your friend is probably fine" << endl;}

    return 0;
}