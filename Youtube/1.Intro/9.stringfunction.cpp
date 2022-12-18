#include <iostream>
using namespace std;

int main(){
    // string.length() return the length of a a string
    // string.empty() return the check of a string is empty or not
    // string,name() clears a string
    // string1.append(string2) append one string to another
    // string.at(x) return the char at x (starts form 0)
    // string.substr (x, y) return the str from x as many as y char (starts from 0)
    // string1.insert (x, "string2") like append function, but with costumization of insert postion
    // string,find("string") find a position of certain string
    // string.erase("x, y") erase the str from x as many as y char (starts from 0)
    
    //Make a username
    string username;
    
    cout << "Enter your username" << endl;
    getline (cin,username);

    if (username.empty()) {
        cout << "You didn't enter a username! >:c" << endl;}
    else {
        cout << "Hello" << username << endl;}

    //Make a password
    string password;
    int length;

    cout << "Enter your password" << endl;
    getline (cin,password);

    length = password.length();

    if (password.empty()) {
        cout << "You didn't enter a password! :c" << endl;}
    else if (length > 8) {
        cout << "Your password can't be over 8 character" << endl;}
    else {
        cout << "Your password has been saved" << endl;}
    
    // Change password
    char answer;

    cout << "Do you wanna change your password? (Y/n)" << endl;
    cin >> answer;

    switch (answer) {
        case 'Y':
            password.clear();
            cout << "Enter your new password" << endl;
            cin >> password;
                if (password.empty()) {
                    cout << "You didn't enter a password! :c" << endl;}
    
                else if (length > 8) {
                cout << "Your password can't be over 8 character" << endl;}
    
                else {
                cout << "Your password has been saved" << endl;}
        
        case 'n' :
            cout << "OK" << endl;
        default :
            cout << "Please enter (Y/n)" << endl;
    
    }
    // Make an email
    string email;
    char answer2;

    cout << "Do you wanna make an email? (Y/n)" << endl;
    cin >> answer2;

    switch (answer2) {
        case 'Y' :
            email = username.append("@gmail.com");
            cout << "Your email is" << email << endl;
        case 'n' :
            cout << "OK" << endl;
        default :
            cout << "Please enter (Y/n)" << endl;
    }

    //Intials
    char initial = username.at(0);

    cout << "Your initial is" << initial << endl;

    //Nickname
    string nickname = username.substr(0,2);

    cout << "Your name is " << nickname << endl;

    //Alias
    string alias = username.insert(0, "@");
    
    cout << "Your alias is " << alias << endl;

}