#include <iostream>
using namespace std;

bool isUntung(int a, int b){
    if((a-b) >= 0 ) return true;
    else return false;}

int main(){
    int N;
    cin >> N;
    int harga[N];
    for(int i = 0; i<N; i++) cin >> harga[i];

    int max = 0;

    for(int i = 0; i < N-1; i ++){
        max += ((harga[i+1]-harga[i]) > 0 ? (harga[i+1]-harga[i]) : 0);}
    cout << max;

    return 0;
}