#include <iostream>
using namespace std;

// ABSTRACTION
// Force an object to implement certain method from an abstract class

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:  
    string Name,Company;
    int Age;
public: 
    void setName(string name) //setter 
    {
        string Name = name;}

    string getName()//getter 
    {
        return Name;}

    void setCompany(string company) {
        string Company = company;}

    string getCompany() {
        return Company;}

    void setAge(int age) {
        if (Age >=18) {
            int Age = age;}
    }

    int getAge() {
        return Age;}

     
    Employee (string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;}

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;}

    void AskForPromotion() {
        if (Age>30) {
            cout << Name << " got promoted!" << endl;}

        else {
            cout << "Sorry " << Name << ", No promotion for you." << endl;}
    }
};

int main(){
    //Encapsulation = the way to group a certain method in class

    Employee employee1("Timo", "Unair", 17);
    employee1.setAge(15);
    //employee1.IntroduceYourself();

    Employee employee2("Figo", "benkel", 31);
    //employee2.IntroduceYourself();

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}