#include <iostream>
using namespace std;

int main() {
    string item;
    double price;
    int quantity;
    double total;

    cout << "What do you want to buy?" << endl;
    getline (cin, item);
    cout << "What is the price of each ($)" << endl;
    cin >> price;
    cout << "How many do you want" << endl;
    cin >> quantity;
    
    total = price * quantity;

    cout << "Your total is " << total;
}