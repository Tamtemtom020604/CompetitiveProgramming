#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int monster[N];
    int terowongan[2*K];

    for(int i = 0; i<N; i++) cin >> monster[i];
    for(int i = 0; i<2*K; i++){
        cin >> terowongan[K] >> terowongan[K+1];
        K += 2;}
    
    for(int i = 0; i<K; i++){
        
    }

    return 0;
}