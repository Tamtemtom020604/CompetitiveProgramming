#include <iostream>
using namespace std;

int main(){

    int pusatX, pusatY;
    scanf("%d", &pusatX);
    scanf("%d", &pusatY);
    
    int nKarakter;
    scanf("%d", &nKarakter);

    int karakter[2*nKarakter];
    
    for(int i = 0; i < 2*nKarakter; i++) scanf("%d", &karakter[i]);

    int nBom;
    scanf("%d", &nBom);

    float bom[nBom];
    for(int i = 0; i < nBom; i++) scanf("%d", &bom[i]);

    float jKarakter[nKarakter];
    int karakterindex = 0;
    for(int i = 0; i < nKarakter; i++){
        jKarakter[i] = (karakter[karakterindex]-pusatX)*(karakter[karakterindex]-pusatX)  + (karakter[karakterindex+1]-pusatY)*(karakter[karakterindex+1]-pusatY);
        karakterindex+=2;}
    
    int mati[nBom];
    for(int i = 0; i < nBom; i++) mati[i] = 0;
    
    int j = 0;
    int i = 0;
        while(i < nBom){
            if (j == nKarakter) {j = 0; i++;}
            if (jKarakter[j] <= bom[i]*bom[i]) mati[i]++;
            j++;}
    
    for(int i = 0; i < nBom; i++) printf("%d", mati[i]);

    return 0;
}