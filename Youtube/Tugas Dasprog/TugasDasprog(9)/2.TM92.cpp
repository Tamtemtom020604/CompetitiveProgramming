#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double sum ( int arr[], int n){
    double total = 0;
    for (int i = 0; i < n ; i++ )
    total += arr[i];
    
    return total;}

template<typename T>
T FindMax(T *arr, size_t n)
{return *max_element(arr, arr+n);}

template<typename T>
T FindMin(T *arr, size_t n)
{return *min_element(arr, arr+n);}


int main(){
    string answer;
    do {
        int banyak;
        double jumlah, rata2, maksimum, minimum;
        int* nilai = new int[banyak];
        cout << "Berapa banyak data yang ingin kamu hitung? : " << endl;
        cin >> banyak;
        for (int i = 0; i < banyak; i++) {
            cout << "Input nilai #" << i+1 << " : " << endl;
            cin >> nilai [i] ;}
        jumlah = sum(nilai, banyak);
        rata2 = jumlah/banyak;
        maksimum = FindMax(nilai, banyak);
        minimum = FindMin(nilai, banyak);

        cout << "Nilai Total : " << jumlah << endl;
        cout << "Nilai Rata - Rata : " << rata2 << endl;
        cout << "Nilai Data Input Maksimal : " << maksimum << endl;
        cout << "Nilai Data Input Minimal : " << minimum << endl;
        cout << "---------------------------" << endl;
    
        cout << "Input data lagi? ('Y' to continue):" << endl;
        cin >> answer;

        } while (answer.at(0) == 'Y');
    cout << "Terima Kasih" << endl;
    return 0;
}