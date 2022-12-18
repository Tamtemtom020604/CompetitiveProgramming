#include <iostream>
#include <cmath>
using namespace std;

/*Terdapat N tombol yang dinomori dari 1 hingga N dan sebuah lampu dalam keadaan
mati. Apabila tombol ke-i ditekan, keadaan lampu akan berubah (dari mati menjadi
menyala, atau sebaliknya) apabila N habis dibagi oleh i. Apabila masing-masing
tombol ditekan tepat sekali, bagaimana keadaan lampu pada akhirnya?
Format Masukan
Sebuah baris berisi sebuah bilangan, yaitu N.
Format Keluaran
Sebuah baris berisi:
• "lampu mati", apabila keadaan akhir lampu adalah mati.
• "lampu menyala", apabila keadaan akhir lampu adalah menyala.
Contoh Masukan 1
5
Contoh Keluaran 1
lampu mati
Contoh Masukan 2
4
Contoh Keluaran 2
lampu menyala
Penjelasan
Pada contoh pertama, tombol yang mempengaruhi keadaan lampu adalah tombol
1 dan tombol 5. Penekanan tombol 1 mengakibatkan lampu menjadi menyala, dan
penekanan tombol 5 mengembalikannya ke keadaan mati.
Pada contoh kedua, tombol yang mempengaruhi keadaan lampu adalah tombol 1,
tombol 2, dan tombol 4. Penekanan tombol 1 mengakibatkan lampu menjadi menyala,
penekanan tombol 2 mengembalikannya ke keadaan mati, dan penekanan tombol 4
menjadikan lampu kembali menyala.
Batasan
2
Contoh Soal Pemrograman Kompetitif
• 1 ≤ N ≤ 101*/

int main(){
    int N, i;
    bool lampu = false;
    cout << "Masukkan N : ";
    cin >> N;

    for(i = 1; i <= N; i++){
        if(N%i == 0){
            if(lampu){lampu = false;}
            else{lampu = true;}}
        cout << lampu;}
    
    if(lampu){cout << "Lampu Menyala ";}
    else{cout << "Lampu Mati";}
}
