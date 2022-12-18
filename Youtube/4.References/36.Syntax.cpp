#include <iostream>
using namespace std;

//References = set up and aliases for variable. And have other variables name you can go trough to modify that variable

int main(){
    
    int x = 5;
    double y = 10.5 ;

    int& refx(x);
    double& refy(y);

    cout << refx << endl;
    cout << refy << endl;

    cout << &x << endl;
    cout << &refx << endl;
    cout << &y << endl;
    cout << &refy << endl; //even the positions are same

    x = 6;
    y = 30.5;   

    cout << refx << endl;
    cout << refy << endl;   //if the original changes, the references will also changes

    refx = 7;
    refy = 50.5;   

    cout << x << endl;
    cout << y << endl; //if the references changes, the original will also changes

    return 0;
}