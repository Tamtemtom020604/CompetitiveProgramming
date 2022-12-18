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

    //INSERTION METHOD METHOD
        int temp;
        for (int i = 1; i < digit; i ++) {
            for (int j = i; j > 0 ; j--) {
                if (arraydata[j] < arraydata[j-1]) {tukar (&arraydata[j], &arraydata[j-1]);}
                else {break;}
            }
            cout << endl;
            cout << "Tahap " << i + 1 << ": ";

            for (int a = 0; a < digit; a++) {
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