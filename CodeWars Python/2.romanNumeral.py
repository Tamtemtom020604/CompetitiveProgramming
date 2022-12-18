#Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.

# Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.

# Example:

# solution('XXI') # should return 21
# Help:

# Symbol    Value
# I          1
# V          5
# X          10
# L          50
# C          100
# D          500
# M          1,000 

def solution(roman):
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


    
print(solution('XXI'))
print(solution('MMVIII'))
print(solution('MDCLXVI'))