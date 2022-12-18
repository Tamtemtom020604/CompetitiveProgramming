#include <iostream>
using namespace std;

bool fix(string a, string b, int N){
    for (int i = 0; i < N; i ++){
        if (a[i] > b[i]) return false;}
    return true;}

void swap(string a, string b, int awal, int akhir){
    string temp = a.substr(awal,akhir);
    a.substr(awal,akhir) = b.substr(awal,akhir);
    b.substr(awal,akhir) = temp;}

int main(){

    int N;
    string a, b;
    cin >> N >> a >> b;

    int awal, akhir;

    int index = 0;
    int count = 0;
    while(index < N){  
        int i = 0, j = N-1;
        
        for(i; i < N; i++){
            if (a[i] > b[i]) {awal = i;
            break;}}
        for(j; j >= 0; j--){
            if (a[j] < b[j]) {akhir = j;
            break;}}
        for(i; i <=j; i++){
            swap(a, b, i, j-i);}
        
        if(fix(a,b,N)) break;
        
        index++;
        count++;
    }
    
    cout << a << b << awal << akhir;
    cout << count;

    
    return 0;
}