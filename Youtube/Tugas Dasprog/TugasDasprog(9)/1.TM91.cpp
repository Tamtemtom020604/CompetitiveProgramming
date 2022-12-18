#include <iostream>
using namespace std;

int main(){
    
    char answer;

    while ( answer != 'A') {
        printf ("Ketik 'A'!");
        scanf ("%c", &answer);
    }

    printf ("Terima kasih");
    return 0;
}