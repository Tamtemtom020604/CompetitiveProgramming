#include <iostream>
#include <stdio.h>
using namespace std;

void tukar (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;}

void tampil(int array[], int digit) {
    cout << "Data anda adalah : ";
    for (int i = 0; i < digit; i++) {
        cout << array[i];}}

int main(){
    
    string strInput;
    int arraydata[1024];

    cout << "Input NIM & tanggal lahir DDMMYYYY (162112233001311221983): " << endl;
    cin >> strInput;

    int digit = strInput.size();

    int i;
    for(i=0; i<digit; i++){
        char cInput = strInput.at(i);
        int icInput = cInput - '0';
        arraydata [i] = icInput;
    }
    //tampilkan
    tampil(arraydata, digit);
    cout << endl;
    cout << "Jumlah digit data anda adalah : " << digit << endl; 

    //SELECTION METHOD METHOD
        int pos, temp;
        for (int i = 0; i < digit; i++) {
            //temp = arraydata[i];
            //pos = i;
            for (int j = i + 1; j < digit; j++) {
                if ( arraydata[j] < arraydata[i]) {tukar (&arraydata[i], &arraydata[j]);}}
        
            //arraydata[pos] = arraydata[i];
            //arraydata[i] = temp;

            cout << endl;
            cout << "Tahap " << i + 1 <<": ";
            for(int a = 0; a < digit; a++){
               cout << arraydata[a] << " ";}}

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