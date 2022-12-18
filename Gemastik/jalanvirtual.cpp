#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin >> N;
    
    int langkah[N];
    
    for(int i = 0; i < N; i++) cin >> langkah[i];

    for (int i = 0; i < N ; i++){
        if(langkah[i] % 10 == 0) cout << -2*(langkah[i]/10)     << " " << -2*(langkah[i]/10)     << endl;
        if(langkah[i] % 10 == 1) cout << -2*(langkah[i]/10) + 1 << " " << -2*(langkah[i]/10)     << endl;
        if(langkah[i] % 10 == 2) cout << -2*(langkah[i]/10) + 1 << " " << -2*(langkah[i]/10) + 1 << endl;
        if(langkah[i] % 10 == 3) cout << -2*(langkah[i]/10) + 1 << " " << -2*(langkah[i]/10) + 2 << endl;
        if(langkah[i] % 10 == 4) cout << -2*(langkah[i]/10)     << " " << -2*(langkah[i]/10) + 2 << endl;
        if(langkah[i] % 10 == 5) cout << -2*(langkah[i]/10) - 1 << " " << -2*(langkah[i]/10) + 2 << endl;
        if(langkah[i] % 10 == 6) cout << -2*(langkah[i]/10) - 2 << " " << -2*(langkah[i]/10) + 2 << endl;
        if(langkah[i] % 10 == 7) cout << -2*(langkah[i]/10) - 2 << " " << -2*(langkah[i]/10) + 1 << endl;
        if(langkah[i] % 10 == 8) cout << -2*(langkah[i]/10) - 2 << " " << -2*(langkah[i]/10)     << endl;
        if(langkah[i] % 10 == 9) cout << -2*(langkah[i]/10) - 2 << " " << -2*(langkah[i]/10) - 1 << endl;
    }
    
    return 0;
}