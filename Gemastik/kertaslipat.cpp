#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int sisi[3*N];

    for(int i = 0; i < 3*N; i++) cin >> sisi[i];
    
    int a = 0;
    while(a < 3*N){
        for(int b = 1; b <= sisi[a+2]; b++){
            (sisi[a]>sisi[a+1]) ? sisi[a] /= 2: sisi[a+1] /=2;
            if(sisi[a]<sisi[a+1]){
                int temp = sisi[a];
                sisi[a] = sisi[a+1];
                sisi[a+1] = temp;
            }}
        
        cout << sisi[a] << sisi[a+1] << endl;
        a+=3;}

    return 0;
}