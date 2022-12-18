#include <iostream>
using namespace std;

void bakePizza(string bread) 
{cout << bread << " ";}

void bakePizza(string bread, string sauce) 
{cout << bread << " ";
cout << sauce << " ";}

void bakePizza(string bread, string sauce, string cheese) 
{cout << bread << " ";
cout << sauce << " ";
cout << cheese << " ";}

void bakePizza(string bread, string sauce, string cheese, string topping) 
{cout << bread << " ";
cout << sauce << " ";
cout << cheese << " ";
cout << topping << " ";}

int main(){
    string bread, sauce, cheese, topping;

    bread = "Thicc crust ";
    sauce = " marinara";
    cheese = "mozarella";
    topping = "pepperoni";

    bakePizza(bread);

    return 0;
}
