#include <iostream>
using namespace std;

int getMin(int number[], int size) {
    int min = number[0];
    for (int i = 1; i < size; i++) {
        if (number[i] < min) {
            min = number[i];}
    }
    return min;
};

int getMax(int number[], int size) {
    int max = number[0];
    for (int i = 1; i < size; i++) {
        if (number[i] > max) {
            max = number[i];}
    }
    return max;
};

void getMinAndMax(int number[], int size, int *min, int *max) {
    for (int i = 1; i < size; i++) {
        if (number[i] > *max) {
            *max = number[i];}
        if (number[i] < *min) {
            *min = number[i];}
    }
};

int main(){
    
    int number[5] = {5, 4, -1, 29, 6};

    //cout << "Min is" << getMin(number, 5) << endl;
    //cout << "Max is" << getMax(number, 5) << endl;
    
    int min = number[0];
    int max = number[0];

    getMinAndMax(number, 5, &min, &max);

    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;

    return 0;
}