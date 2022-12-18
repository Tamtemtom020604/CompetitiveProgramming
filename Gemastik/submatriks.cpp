#include <iostream>
using namespace std;

int main(){

    int N, M, Q;
    cin >> N >> M >> Q;
    int array[N*M];
    int batas[4*Q];
    int a = 0, jumlah = 0;
    for(int j = 0; j < N; j++){    
        for(int i = 0; i < M; i++){
            cin >> array[i];}}
    
    for(int i = 0; i < 4*Q; i++){
            cin >> batas[i];}
    
    for(int k = 1; k < Q; k++){
        for(int j = 1; j < (4*(batas[a+3]) + batas[a+3] -1) - (4*(batas[a+1]) + batas[a+1] -1); j++){    
            int index = array[(4*(batas[a+1]) + batas[a] -1)];
            for(int i = 1; i <= (4*(batas[a+3]) + batas[a+2] -1) - (4*(batas[a+1]) + batas[a] -1); i++){
                jumlah += array[index];
                index++;}
            cout << jumlah << endl;
            a+=4;}
        jumlah = 0;
    }
}