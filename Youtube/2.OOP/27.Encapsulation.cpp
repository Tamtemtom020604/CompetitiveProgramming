#include <iostream>
using namespace std;

// ENCAPSULATION 
// The way to group a certain method in class
class Employee {
private:  
    string Name,Company;
    int Age;
public: 
    void setName(string name) //setter 
    {
        string Name = name;
    }

    string getName()//getter 
    {
        return Name;
    }

    void setCompany(string company) {
        string Company = company;
    }

    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (Age >=18) {
            int Age = age;}
    }

    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    
    Employee (string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){

    Employee employee1("Timo", "Unair", 17);
    employee1.setAge(15);
    employee1.IntroduceYourself();

    Employee employee2("Figo", "benkel", 21);
    employee2.IntroduceYourself();
    return 0;

}