#include <iostream>
#include <string>
//#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    double x;
    double y;

    cout << "Enter number 1" << endl;
    cin >> x;
    cout << "Enter number 2" << endl;
    cin >> y;

     double z = max (x,y);
     z = min(x,y); 
     z = pow(x,y);
     z = sqrt(x); // square root
     z = abs(y); // absolute volue(+)
     z = round(x); //round number
     z = ceil(y); //round up
     z = floor(x); //round down


    cout << z;

    return 0;
}