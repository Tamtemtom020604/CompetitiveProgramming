/*
COPY & COPY_IF:

NOTES : 
    1. Copy copies the elements in the range, defined by [first, last), to another range beginning at  the first
    2. Copy_if only copy if  predicate returns trus
    3. SOurce and destination range are overlapping then the behavior is undefined
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;

void print(vector <int>& vec){
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;}

int main(){
    vector <int> from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);

    vector<int> to_vector1(from_vector.size());
    copy(from_vector.begin(), from_vector.end(), to_vector1.begin());
    print(to_vector1);

    //Alternatively, you dont have to have the size of source vector
    vector<int> to_vector2;
    copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector2));
    print(to_vector2);

    //either way is equivalent for
    vector<int> to_vector = from_vector;
    // The benefit of copy function is you have a start and finish part to which part you wannna copy

    cout << "The odd number in the vector are : ";
    vector <int> to_vector3(5);
    copy_if(from_vector.begin(), from_vector.end(), to_vector3.begin(), [](int x) {return (x & 1);});
    print(to_vector3);
    return 0;
}