#include <iostream>
using namespace std;

int main(){
    
    int primenumber[5] = {2, 3, 5, 7, 11};
    
    /*cout << primenumber << endl;
    cout << primenumber << endl;
    cout << &primenumber[0] << endl;
    cout << primenumber[2] << endl; 
    cout << &primenumber[2] << endl; 
    cout << (primenumber + 2) << endl;*/
    
    for (int i = 0; i < 5; i++) {
        cout << primenumber[i] << endl;}

    for (int i = 0; i < 5; i++) {
        cout << *(primenumber+i) << "  ";
    }
    
    return 0;
}
