#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Human {
public:
    string name;
    int age;
    double weight;

    string eat(string food) {
        cout << this->name << "is eating " << food << endl;
        return food;
    }
    
    string drink(string beverage) {
        cout << this->name << " is drinking " << beverage << endl;
        return beverage;
    }

    void sleep() {
        cout << this->name << " is sleeping" << endl;
    }
};

int main(){
    Human human1;
    human1.name = "Timo";
    human1.age = 18;

    Human human2;
    human2.name = "Figo";
    human2.age = 20;

    Human human3;
    human3.name = "Bayu";

    human1.eat("burger");
    human2.drink("sprite");
    human3.sleep();

    return 0;
}