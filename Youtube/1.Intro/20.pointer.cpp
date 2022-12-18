#include <iostream>
using namespace std;

int main(){
    //the adress of a variabel in RAM

    string name = "HiYaAaahh";
    int age = 18;

    string* pName = &name;
    int* pAge = &age;

    cout << pName << endl;
    cout << pAge << endl;

    
    return 0;
}