# Complete the solution so that it strips all text that follows any of a set of comment markers passed in. Any whitespace at the end of the line should also be stripped out.

# Example:

# Given an input string of:

# apples, pears # and bananas
# grapes
# bananas !apples
# The output expected would be:

# apples, pears
# grapes
# bananas
# The code would be called like so:

# result = solution("apples, pears # and bananas\ngrapes\nbananas !apples", ["#", "!"])
# # result should == "apples, pears\ngrapes\nbananas"


def strip_comments(s, markers):
    s = s.split('\n')
    b = list();
    for line in s:
        if (len(set(markers) - set(line)) != len(markers)) : 
            for char in line:
                if char in markers:
                    b.append(line[:line.find(char)].rstrip())
                    break
            continue            
        else : 
            b.append(line.rstrip())
            continue
        
    return '\n'.join(b)
        
print(strip_comments('apples, pears # and bananas\ngrapes\nbananas !apples', ['#', '!']))