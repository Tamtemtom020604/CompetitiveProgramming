#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        bool isit;
        int y = x;
        long int num = 0;
        if (x > 0) {
            while (x > 0) 
            { num = num*10;
             num = num + ( x % 10);
             x = x/10;}
            if ( num == y ) {isit = true;}
            else {isit = false;}}
        else if( x == 0) {isit = true;}
        else {isit = false;}
        
        
        
    return isit;}
};