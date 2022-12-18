#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void welcome( string username, int userage) {
    cout << "welcome " << username << endl;
    cout << "You are " << userage << " years old" << endl;}

void goodbye() {
    cout << "Goodbye" << endl;}

int main(){
    int age;
    string name;
    cout << "What is your name?" << endl;
    getline (cin,name);
    cout << "How old are you?" << endl;
    cin >> age;

    welcome (name, age);  
    
    return 0;
}