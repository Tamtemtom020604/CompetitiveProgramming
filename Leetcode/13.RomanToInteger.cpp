class Solution {
public:
    int romanToInt(string s) {
        int final = 0;
        int length = s.length();
        
        for(int i = 0; i < length; i++) {
            if (i <= length - 2 ) {
                if (s.at(i) == 'I' && s.at(i+1) == 'V') {
                    final += 4;
                    i += 1;
                }
                else if (s.at(i) == 'I' && s.at(i+1) == 'X') {
                    final += 9;
                    i += 1;
                }
                else if (s.at(i) == 'X' && s.at(i+1) == 'L') {
                    final += 40;
                    i += 1;
                }
                else if (s.at(i) == 'X' && s.at(i+1) == 'C') {
                    final += 90;
                    i += 1;
                }
                else if (s.at(i) == 'C' && s.at(i+1) == 'D') {
                    final += 400;
                    i += 1;
                }
                else if (s.at(i) == 'C' && s.at(i+1) == 'M') {
                    final += 900;
                    i += 1;
                }
                else {
                switch (s.at(i)) {
                    case 'I':
                        final += 1;
                        break;
                    case 'V':
                        final += 5;
                        break;
                    case 'X':
                        final += 10;
                        break;
                    case 'L':
                        final += 50;
                        break;
                    case 'C':
                        final += 100;
                        break;
                    case 'D':
                        final += 500;
                        break;
                    case 'M':
                        final += 1000;
                        break;}
                    }
            }
            
            else {
                switch (s.at(i)) {
                    case 'I':
                        final += 1;
                        break;
                    case 'V':
                        final += 5;
                        break;
                    case 'X':
                        final += 10;
                        break;
                    case 'L':
                        final += 50;
                        break;
                    case 'C':
                        final += 100;
                        break;
                    case 'D':
                        final += 500;
                        break;
                    case 'M':
                        final += 1000;
                        break;}
                }
        }
        return final;}
    };