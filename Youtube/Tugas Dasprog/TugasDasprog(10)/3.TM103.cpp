#include <stdio.h>
#include <string.h>
#include <math.h>

int dijumlah(int *x, int *y){
     
    int jumlah = *x + *y;

     return jumlah;
}


int dikurang(int *x, int *y){ 
    int kurang = *x - *y;
    kurang = abs(kurang);
    return kurang;
}


int dibagi(int *x, int *y){
    int bagi = *x / *y;

    return bagi;
}

int main (int argc, const char * argv[]) {
    int a, b;
    
    printf ("Masukan angka 1 : ");
    scanf ("%d", &a);
    
    printf ("Masukan angka 2 : ");
    scanf ("%d", &b);

    printf ("Jumlah : %d\n", dijumlah(&a,&b));
    printf ("Selisih : %d\n",dikurang(&a,&b));
    printf ("Bagi : %d\n",dibagi(&a,&b));

    return 0;
}
