#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, X, selisih = 99999999999999, jawaban1 = 0, jawaban2 = 0;
    cin >> N;
    int kupon[N];
    cin >> X;
    for(int i = 0; i < N; i++) {
        cin >> kupon[i];}

    for (int i = 0; i < N; i++) {
        if(abs(kupon[i]-X) < selisih){jawaban1 = kupon[i]; selisih = abs(kupon[i]-X);}}

    for (int i = 0; i < N; i++) {
        if(abs(kupon[i]-X) == selisih) jawaban2 = kupon[i];}

    if(jawaban1 > jawaban2) {
        int temp = jawaban1; jawaban1 = jawaban2; jawaban2 = temp;}
    
    if(jawaban1 != jawaban2){    
        if(jawaban1 < 10){cout << "0000" << jawaban1;}
        else if(jawaban1 < 100){cout << "000" << jawaban1;}
        else if(jawaban1 < 1000){cout << "00" << jawaban1;}
        else if(jawaban1 < 10000){cout << "0" << jawaban1;}
        else {cout << jawaban1;}

        cout << endl;

        if(jawaban2 < 10){cout << "0000" << jawaban2;}
        else if(jawaban2 < 100){cout << "000" << jawaban2;}
        else if(jawaban2 < 1000){cout << "00" << jawaban2;}
        else if(jawaban2 < 10000){cout << "0" << jawaban2;}
        else {cout << jawaban2;}}
    
    else{
        if(jawaban1 < 10){cout << "0000" << jawaban1;}
        else if(jawaban1 < 100){cout << "000" << jawaban1;}
        else if(jawaban1 < 1000){cout << "00" << jawaban1;}
        else if(jawaban1 < 10000){cout << "0" << jawaban1;}
        else {cout << jawaban1;}
    }

    return 0;
}