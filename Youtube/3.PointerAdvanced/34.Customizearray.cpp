#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Size? : " << endl;
    cin >> size;

    //int myArray[5]; //array's size need to be declared before the program even started
    int* myArray = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Array [" << i << "] : " << endl;
        cin >> myArray[i];}

    for (int i = 0; i < size; i++) {
        cout << myArray[i] << "  " << endl;}
    
    delete[]myArray;
    myArray = NULL;
    return 0;
}