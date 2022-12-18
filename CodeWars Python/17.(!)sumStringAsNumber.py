# Given the string representations of two integers, return the string representation of the sum of those integers.

# For example:

# sumStrings('1','2') // => '3'
# A string representation of an integer will contain no characters besides the ten numerals "0" to "9".

# I have removed the use of BigInteger and BigDecimal in java

# Python: your solution need to work with huge numbers (about a milion digits), converting to int will not work.



def number(x):
    y = 0
    m = 1
    while x != '':
        y += int(x[-1])*m
        m*=10
        x = x[:-1]
    return y

def sum_strings(x, y):
    s = ""
    sisa = 0
    while x != '' or  y !='':
        if x != '' and  y !='':
            s = str((int(x[-1]) + int(y[-1]))%10 + sisa) + s
            if (int(x[-1]) + int(y[-1])) >= 10:
                sisa = 1
            else : sisa = 0
            x = x[:-1]; y = y[:-1]
        elif x == '' and y != '':
            s = str(int(y) + sisa) + s
            break
        elif y == '' and x != '':
            s = str(int(x) + sisa) + s
            break
    return s


print(sum_strings("1", "2"))
print(sum_strings("123", "456"))
print(sum_strings("1567", "2156"))
print(sum_strings("67", "156"))
print(number("123"))