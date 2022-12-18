#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Pizza {
public :
    string name;
    int amount;
    string topping;
    char size;

    Pizza (string name, int amount, char size, string topping) {
        this -> name = name;
        this -> amount = amount;
        this -> size = size;
        this -> topping = topping;
    }
    Pizza (string name, int amount, char size) {
        this -> name = name;
        this -> amount = amount;
        this -> size = size;
    } 
};

int main () {
    
    Pizza cheesepizza ("Pizza Hut", 2, 'L', "Cheese");
    Pizza notoppingpizza ("Domino", 1, 'S');

    cout << cheesepizza.topping << endl;
    cout << notoppingpizza.size << endl;

    return 0;

}