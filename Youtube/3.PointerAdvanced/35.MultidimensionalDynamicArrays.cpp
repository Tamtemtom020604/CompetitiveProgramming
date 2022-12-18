#include <iostream>
using namespace std;

//Multidimensional Dynamic Arrays is a concept about a pointer of a pointer.

int main(){
    int rows, cols;

    cout << "How many rows? : " << endl;
    cin >> rows;
    cout << "How many cols? : " << endl;
    cin >> cols;

    int** table = new int* [rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int [cols]; // every 1 rows has (cols) cols
    }

    table[1][2] = 88; // rows 1 cols 2

    for (int i = 0; i < rows; i++) {
        delete[]table[i]; // deallocate every cols in every arrays
    }

    delete[]table; //deallocate every rows in table
    table = NULL; //Turn table into NULL



    return 0;
}