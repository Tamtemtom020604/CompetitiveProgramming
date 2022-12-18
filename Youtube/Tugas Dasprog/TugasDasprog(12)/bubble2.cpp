#include <iostream>
#include <stdio.h>
using namespace std;

int jumlahAngka (int number) {
    int count = 0;
    while(number != 0) {
      number = number / 10;
      count++;}
    return count;}

void tukar (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;}

void tampil(int array[], int digit) {
    cout << "Data anda adalah : ";
    for (int i = 0; i < digit; i++) {
        cout << array[i];}}

int main(){
    
    int data;
    cout << "Masukkan NIM dan tanggal lahirmu" << endl;
    cout << " Ex : 16211223344512122003" << endl;
    cin >> data;

    //Hitung jumlah digit
    int digit = jumlahAngka(data);
    int arraydata[digit];
    cout << digit << endl;

    //Masukkan ke dalam array
    for (int i = digit-1 ; i >= 0; i--) {
        arraydata[i] = data % 10;
        data /= 10;}

    //tampilkan
    tampil(arraydata, digit);
    cout << endl;
    cout << "Jumlah digit data anda adalah : " << digit << endl; 

    //BUBBLE METHOD
     for (int j = 0; j < digit; j++) { 
        int acak = 0;  
        for ( int i = 0; i < digit-1 ; i++) {
           if ( arraydata[i] > arraydata[i + 1]) {
                tukar (&arraydata[i], &arraydata[i + 1]);
                acak++;}}
        if (acak == 0) {break;}
        cout << endl;
        cout << "Tahap " << j + 1 << " : " << endl;
        for(int a = 0; a < digit; a++) {
            cout << arraydata[a] << " ";}
        }

    //Hasil
    cout << endl;
    cout << endl;
    cout << "Data anda setelah di sort : ";
    for (int i = 0; i < digit; i++) {cout << arraydata[i];}
    cout << endl;
    cout << endl;
    cout << "Terima kasih";
    
    return 0;
}