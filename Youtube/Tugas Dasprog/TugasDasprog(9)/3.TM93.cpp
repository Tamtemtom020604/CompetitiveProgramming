#include <iostream>
using namespace std;

int main(){
    string answer;
    do { 
        string kalimat;
        int spasi = 0;
        
        cout << "Input Kalimat : " << endl;
        getline(cin, kalimat);
        //cin >> kalimat;

        int panjang = kalimat.length();
        for (int i = 0; i < panjang; i++) {
            if (kalimat.at(i) == ' ') {
                spasi++;}
        }
        
        cout << "Kalimat : " << kalimat << endl;
        cout << "----------------------------------" << endl;
        cout << "Jumlah Karakter : " << panjang << endl;
        cout << "Jumlah Spasi : " << spasi << endl;
        cout << "----------------------------------" << endl;

        cout << "Input Kalimat lagi? (Y/T)" << endl;
        cin >> answer;
        cin.ignore();
        } while (answer.at(0) == 'Y');

return 0;
}