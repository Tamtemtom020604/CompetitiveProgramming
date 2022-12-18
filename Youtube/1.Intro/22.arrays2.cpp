#include <iostream>
using namespace std;

int main(){
    
    int number;
    cout << "How many cars do you have?" << endl;
    cin >> number;
    cin.ignore();

    string* pCars = new string[number];
    //pointer

    for (int i = 0; i < number; i++) {
        cout << "Enter car #" << i+1 << endl;;
        getline(cin,pCars[i]);}

    cout << "\nHere is your garage!" << endl;
    cout << "----------------------" << endl;
    
    for (int i = 0; i < number; i++) {
        cout << "Parking car #" << i+1 << " " << pCars[i] << endl;}
    
    return 0;
}