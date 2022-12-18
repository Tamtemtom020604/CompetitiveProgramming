#include <bits/stdc++.h>
using namespace std;

int faktorial(int N){
    if (N == 1) return 1;
    return N*faktorial(N-1);}
int deret(int N){
    return N*(N+1)/2;}
int deret2(int N){
    if(N == 1) return 0;
    return deret(N) + deret(N-1);}
bool sama(int array[]){
    int i = 0, j = 1;
    while(i != sizeof(array)/4-1){
        if(j == sizeof(array)/4-1){
            i++; j = i + 1;}
        if(array[i] == array[j]) return true;
        j++;}
    return false;
}

int main(){
    int N;
    cin >> N;
    int array[4];
    for(int i = 0 ; i < 4; i++) cin >> array[i];

    const int modulo = 1e9 + 7;
    
    if(sama(array)){
        if(N <= 4) cout << deret2(N);
        else cout << deret2(N);
    }
    else {
        if(N <= 4) cout << (deret(N-1)*deret(N-3)) % modulo;
        else cout << (deret(N-1)*deret(N-3)*faktorial(N-4)) % modulo;
    }
    return 0;
}