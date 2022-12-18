#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Please enter your name: " << endl;
    cin >> name; // to assign a value from user
    cout << "Welcome " << name << endl;

    string full_name;
    cout << "Please enter your name: " << endl;
    getline (cin, full_name); // to assign a value that more than two word (char acd str only)
    cout << "Hello " << full_name << endl;
    
    return 0;
}