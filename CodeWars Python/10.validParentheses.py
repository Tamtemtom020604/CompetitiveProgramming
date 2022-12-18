# Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid, and false if it's invalid.

# Examples
# "()"              =>  true
# ")(()))"          =>  false
# "("               =>  false
# "(())((()())())"  =>  true
# Constraints
# 0 <= input.length <= 100

# Along with opening (() and closing ()) parenthesis, input may contain any valid ASCII characters. Furthermore, the input string may be empty and/or not contain any parentheses at all. Do not treat other forms of brackets as parentheses (e.g. [], {}, <>).

def valid_parentheses(s):
    a = list(); i = 0
    while i < len(s):
        if s[i] == '(' or s[i] == ')': a.append(s[i])
        j = 1
        while j < len(a):
            if a[j-1] == '(' and a[j] == ')':
                a.pop(); a.pop()
            j+=1
        i+=1
    if len(a) == 0: return True
    else: return False

print(valid_parentheses('(())((()())())'))
print(valid_parentheses(")(()))"))
        