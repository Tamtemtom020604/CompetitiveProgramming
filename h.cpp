#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, q, k; 
vector <vector<int>> arr; int qarr[100000][2], temp;
int main() {
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> k;
        for(int j = 0; j < k; j++) cin >> temp; arr[i].push_back(temp);}
    for(int i = 0; i < q; i++) cin >> qarr[i][0] >> qarr[i][1];
    for(int i = 0; i < q; i++) cout << arr[qarr[i][0]][qarr[i][1]] << endl;
    
    return 0;
}