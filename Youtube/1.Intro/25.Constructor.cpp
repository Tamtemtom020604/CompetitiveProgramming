#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Human {
public:
    string name;
    int age;
    double weight;
    Human ( string name, int age, double weight) {
        this-> name = name;
        this-> age = age;
        this-> weight = weight;
    }
};

int main() {
    // consturctor = a special function that is automatically input
    // useful for assigninf value of variabel

    Human human1("Timo", 18, 65);
    
    cout << human1.name << endl;
    cout << human1.age << " Years Old "<< endl;
    cout << human1.weight << "KG" << endl;

    return 0;

}