# Implement a pseudo-encryption algorithm which given a string S and an integer N concatenates all the odd-indexed characters of S with all the even-indexed characters of S, this process should be repeated N times.

# Examples:

# encrypt("012345", 1)  =>  "135024"
# encrypt("012345", 2)  =>  "135024"  ->  "304152"
# encrypt("012345", 3)  =>  "135024"  ->  "304152"  ->  "012345"

# encrypt("01234", 1)  =>  "13024"
# encrypt("01234", 2)  =>  "13024"  ->  "32104"
# encrypt("01234", 3)  =>  "13024"  ->  "32104"  ->  "20314"
# Together with the encryption function, you should also implement a decryption function which reverses the process.

# If the string S is an empty value or the integer N is not positive, return the first argument without changes.

# This kata is part of the Simple Encryption Series:

# Simple Encryption #1 - Alternating Split
# Simple Encryption #2 - Index-Difference
# Simple Encryption #3 - Turn The Bits Around
# Simple Encryption #4 - Qwerty
# Have fun coding it and please don't forget to vote and rank this kata! :-)

def decrypt(s, n):
    c = [*s]; a = list(); b = c; j = 0
    while j < n:
        a.clear(); i = 0
        while i < int(len(c)/2) :
            a.append(b[int(len(c)/2) + i])
            a.append(b[i])
            i+=1
        if (len(s))%2 == 1 : a.append(b[int((len(c)/2)) + i])
        b.clear(); b = a
        j+=1
    return ''.join(a)


def encrypt(s, n):
    c = [*s]; a = list(); b = list(); j = 0
    while j < n :
        a.clear(); b.clear(); i = 1
        while i < len(c) :
            a.append(c[i])
            b.append(c[i-1])
            i+=2
        if (len(s))%2 == 1 : b.append(s[i-1])
        c.clear(); c = a + b
        j+=1
    return ''.join(c)

print(encrypt("This is a test!", 1))
print(encrypt("This is a test!", 2))
print(encrypt("012345", 2))
print(encrypt("012345", 3))
print(decrypt("hsi  etTi sats!", 1))
print(decrypt("s eT ashi tist!", 2))
print(decrypt(" Tah itse sits!", 3))