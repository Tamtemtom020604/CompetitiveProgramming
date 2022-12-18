/*
COPY_N 7 COPY_BACKWARD

NOTES:
1. copy_n function is used to copy given number of element from surface to destination
2. copy_backwards function copies the element from the range, defined by [first, last), to another range ending at  the last. The element are copied in reverse order (The last element copied first), but their relative order is preserved
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector <int>& vec){
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;}

int main(){

    vector<int> from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);

    //COPY_N
    vector <int> to_vector1;
    copy_n(from_vector.begin(), 4, back_inserter(to_vector1));
    print(to_vector1);

     //COPY_BACKWARD
    vector <int> to_vector2(15);
    copy_backward(from_vector.begin(), from_vector.end(), to_vector2.end());
    print(to_vector2);


    
    return 0;
}
