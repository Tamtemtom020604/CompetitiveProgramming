# Create a RomanNumerals class that can convert a roman numeral to and from an integer value. It should follow the API demonstrated in the examples below. Multiple roman numeral values will be tested for each helper method.

# Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending order: MDCLXVI.

# Input range : 1 <= n < 4000

# In this kata 4 should be represented as IV, NOT as IIII (the "watchmaker's four").

# Examples
# RomanNumerals.to_roman(1000) # should return 'M'
# RomanNumerals.from_roman('M') # should return 1000
# Help
# Symbol	Value
# I	1
# IV	4
# V	5
# X	10
# L	50
# C	100
# D	500
# M	1000

class RomanNumerals:

    def to_roman(val):
        a = list()
        if int(val/1000) == 3 : a.append('M'); a.append('M'); a.append('M')
        elif int(val/1000) == 2 : a.append('M'); a.append('M')
        elif int(val/1000) == 1 : a.append('M')
        else : pass
        
        val = val%1000
        if int(val/100) == 9 : a.append('C'); a.append('M')
        elif int(val/100) == 8 : a.append('D'); a.append('C'); a.append('C'); a.append('C')
        elif int(val/100) == 7 : a.append('D'); a.append('C'); a.append('C');
        elif int(val/100) == 6 : a.append('D'); a.append('C')
        elif int(val/100) == 5 : a.append('D')
        elif int(val/100) == 4 : a.append('C'); a.append('D')
        elif int(val/100) == 3 : a.append('C'); a.append('C'); a.append('C')
        elif int(val/100) == 2 : a.append('C'); a.append('C')
        elif int(val/100) == 1 : a.append('C')
        else : pass
        
        val = val%100
        if int(val/10) == 9 : a.append('X'); a.append('C')
        elif int(val/10) == 8 : a.append('L'); a.append('X'); a.append('X'); a.append('X')
        elif int(val/10) == 7 : a.append('L'); a.append('X'); a.append('X');
        elif int(val/10) == 6 : a.append('L'); a.append('X')
        elif int(val/10) == 5 : a.append('L')
        elif int(val/10) == 4 : a.append('X'); a.append('L')
        elif int(val/10) == 3 : a.append('X'); a.append('X'); a.append('X')
        elif int(val/10) == 2 : a.append('X'); a.append('X')
        elif int(val/10) == 1 : a.append('X')
        else : pass
            
        val = val%10
        if val == 9 : a.append('I'); a.append('X')
        elif val == 8 : a.append('V'); a.append('I'); a.append('I'); a.append('I')
        elif val == 7 : a.append('V'); a.append('I'); a.append('I');
        elif val == 6 : a.append('V'); a.append('I')
        elif val == 5 : a.append('V')
        elif val == 4 : a.append('I'); a.append('V')
        elif val == 3 : a.append('I'); a.append('I'); a.append('I')
        elif val == 2 : a.append('I'); a.append('I')
        elif val == 1 : a.append('I')
        else : pass
        
        return ''.join(a)

    def from_roman(roman):
        num = 0
        while roman != '':
            if roman.startswith('CM') :
                num += 900
                roman = roman[2:]
            elif roman.startswith('M') :
                num += 1000
                roman = roman[1:]
            elif roman.startswith('CD') :
                num += 400
                roman = roman[2:]
            elif roman.startswith('D') :
                num += 500
                roman = roman[1:]
            elif roman.startswith('XC') :
                num += 90
                roman = roman[2:]
            elif roman.startswith('C') :
                num += 100
                roman = roman[1:]
            elif roman.startswith('XL') :
                num += 40
                roman = roman[2:]
            elif roman.startswith('L') :
                num += 50
                roman = roman[1:]
            elif roman.startswith('IX') :
                num += 9
                roman = roman[2:]
            elif roman.startswith('X') :
                num += 10
                roman = roman[1:]
            elif roman.startswith('IV') :
                num += 4
                roman = roman[2:]
            elif roman.startswith('V') :
                num += 5
                roman = roman[1:]
            elif roman.startswith('I') :
                num += 1
                roman = roman[1:]
        return num

print(RomanNumerals.to_roman(1000))
print(RomanNumerals.to_roman(4))
print(RomanNumerals.to_roman(1990))
print(RomanNumerals.to_roman(1))
print(RomanNumerals.to_roman(2008))