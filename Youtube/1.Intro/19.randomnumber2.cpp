#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
using namespace std;

int main(){
    
    int answer,guess;
    int attempt = 1;

    //answer
    srand(time(NULL));
    answer = rand() %10 +1;

    do{
         //guess
        cout << "ATTEMPT " << attempt << endl;
        cout << "------------------------------------" << attempt << endl;
        cout << "Enter your guess! (1-10)" << endl;
        cin >> guess;
        
        if (guess > answer) {
            cout << "NO! THAT'S TOO HIGH" << endl;
            attempt++;}
        else if (guess < answer){
            cout << "NO! THAT'S TOO LOW" << endl;
            attempt++;}
        else {break;}
    }while(answer!=guess);

    cout << "YEAYY YOU GUESSED IT! SUGOI!" << endl;
    cout << "Attempt : " << attempt << endl;
    return 0;
}