#include <iostream>
using namespace std;

int main(){
    // while loop is used to perform the sam code of blocks if certain condition remains true
    
    string name;

    while (name.empty())
    {cout << "Please enter your name : " << endl;
    getline (cin,name);}

    cout << "Welcome " << name << endl;

    // do-while loop = evaluate the value at the end of code

   string answer;
    
    do {
        cout << "You are playing THE GAME" << endl;
        cout << "*pew pew" << endl;
        cout << "Press q to quit!" << endl;
        getline (cin, answer);
    } 
    
    while (answer.at(0) != 'q' && answer.at(0) != 'Q');
    
    return 0;
}