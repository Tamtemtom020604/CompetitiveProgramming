#include <iostream>
using namespace std;

// INHERITENCE
// Make a spesific types of object. Inherit all methods for its parent and have its own methods at the same time

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
protected: // make the properties accessible directly from its derived class 
    string Name,Company;
    int Age;
public: 
    void setName(string name) //setter 
    {string Name = name;}

    string getName()//getter 
    {return Name;}

    void setCompany(string company) {
        string Company = company;}

    string getCompany() {
        return Company;}

    void setAge(int age) {
        if (Age >=18) {
            int Age = age;}}

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

class Developer : public  Employee { //public = to inherit AskForPromotion frmo Employee
public: 
    string FavProgLanguage;

    Developer (string name, string company, int age, string FavProgLanguage)
        :Employee(name, company, age)
    {}

    void FixBug() {
        cout << getName() << "fix bug using" << FavProgLanguage << endl;
    }
};

class Teacher : public Employee {
public:    
    string Subject;

    Teacher (string name, string company, int age, string subject) 
        :Employee(name, company, age)  
    {Subject = subject;}
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " Lesson" << endl;
    }
};

int main(){
    //Encapsulation = the way to group a certain method in class

    Employee employee1("Timo", "Unair", 17);
    employee1.setAge(15);
    //employee1.IntroduceYourself();

    Employee employee2("Figo", "benkel", 31);
    //employee2.IntroduceYourself();

    //employee1.AskForPromotion();
    //employee2.AskForPromotion();

    Developer d = Developer("Timo", "Student", 18, "C++");
    d.FixBug();
    d.AskForPromotion();
    
    Teacher t = Teacher ("Figo", "Unair", 21, "History");
    t.PrepareLesson();
    t.AskForPromotion();

    return 0;
}