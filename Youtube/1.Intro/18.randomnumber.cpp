#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
using namespace std;

int main(){
    //pseudo-random number

    srand(time(NULL));
    
    // rand() %(value of number) +( the nnumber it starts from);
    int number = rand() %6 + 1;
    
    cout << number << endl;

    return 0;
}