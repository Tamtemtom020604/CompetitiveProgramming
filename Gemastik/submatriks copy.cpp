#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, M, Q;
    cin >> N >> M >> Q;
    int array[N*M];
    int batas[4*Q];
    int a = 0, jumlahT = 0;
    vector <int> jumlah;
      
    for(int i = 0; i < N*M; i++)
            cin >> array[i];
    
    for(int i = 0; i < 4*Q; i++){
            cin >> batas[i];}

    int rowIndex = batas[a+1] - 1;
    for(int k = 0; k < Q; k++){
        while(rowIndex < batas[a+3]){    
            for(int i = N*rowIndex + batas[a] -1; i <= N*rowIndex + batas[a+2] -1; i++ ){
                jumlahT+= array[i];}
                rowIndex++;}
        jumlah.push_back(jumlahT);
        rowIndex = 0;
        jumlahT = 0;
        a+=4;
    }
    for (int i = 0; i < Q; i++){
        cout << jumlah[i] << endl;
    }
}