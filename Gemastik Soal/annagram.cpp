#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    int satuan = N%10;
    int puluhan = (N%100 - satuan)/10;
    int Nbaru = (N-N%100) + satuan*10 + puluhan;

    cout << Nbaru - N;
    return 0;

}