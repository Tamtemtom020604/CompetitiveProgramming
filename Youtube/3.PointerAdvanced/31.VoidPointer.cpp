#include <iostream>
using namespace std;

// void pointer is the special pointer that can contain a location of certain variabel
// but void pointer cannot dereference cariabel

void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr) {
    cout << *charPtr << endl;
}

void print (void* ptr, char type) {
    switch (type) {
        case 'i' : cout << *((int*) ptr) << endl; break;
        case 'c' : cout << *((char*) ptr) << endl; break;
        case 'f' : cout << *((float*) ptr) << endl; break;
    }
}

int main () {
    int number = 5;
    char letter = 'a';
    //printNumber(&number);
    //printLetter(&letter);
    
    print(&number, 'i');
    print(&letter, 'c');
    
    return 0;

}