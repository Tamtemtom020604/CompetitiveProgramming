#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int R, C, i=0;
    string temp;
    cin >> R >> C;

    vector <string> susun;
    
    do{
        cout << "Masukkan :";
        cin >> temp;
        susun.push_back(temp);
        i++;}
        while(i<R);
    
    for(int i = 0; i < R; i++){cout << susun[R] << endl;;}

    int count;
    
    for(int j = R-1; j >= 0; j--){
        count = 0;
        
        for(int k  = 0; k < C; k++){
            if(susun[j].at(k) == '1'){count++;}
            if(susun[j].at(k) == '0'){count--;}}
        
        if(count == 0 || count == C){
            for(int a  = 0  ; a < C; a++){
                int count2 = 0;
                for(int b = j; b < R ; b++){
                    if(susun[b-1].at(a) == '1'){
                        while(susun[b+2+count2].at(a) != '1'){count2++;}}
                susun[b+2+count2].at(a) != '1';}
            }
            for(int m  = 0; m < C; m++){
            susun[j-1].at(m) == '0';}}
        
    }
    
    for(int i = 0; i < R; i++){cout << susun[R] << endl;;}
}