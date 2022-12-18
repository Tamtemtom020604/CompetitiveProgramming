# Your job is to write a function which increments a string, to create a new string.

# If the string already ends with a number, the number should be incremented by 1.
# If the string does not end with a number. the number 1 should be appended to the new string.
# Examples:

# foo -> foo1

# foobar23 -> foobar24

# foo0042 -> foo0043

# foo9 -> foo10

# foo099 -> foo100

# Attention: If the number has leading zeros the amount of digits should be considered.
import re

def increment_string(s):
    if s.isalpha() == False:
        list = re.split('(\d+)', s)
        nolSize1  = len(list[1])
        list[1] = str(int(list[1]) + 1)
        nolSize2  = len(list[1])
        s = list[0] + '0'*(nolSize1- nolSize2) + list[1]
    else:
        s += '1'    
    return s

print(increment_string("foobar1"))
print(increment_string("foobar0043"))

