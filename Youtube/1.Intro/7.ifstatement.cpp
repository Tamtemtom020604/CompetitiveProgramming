#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    if (age <= 18) {
        cout << "You are illegal" << endl; }
    
    else if (age == 18) {
        cout << "You are just legal now" << endl;}
    
    else {
        cout << "You are an adult" << endl;} 
    
    char happy;
    cout << "Are you happy about that? (Y/n)" << endl;
    cin >> happy;
    
    if (happy = 'Y') {
        cout << "Great!" << endl;}
    else if (happy = 'n') {
        cout << "Come on! You will get one someday" << endl;}
    else {cout << " Please enter (Y/n)" << endl;}
    return 0;
}