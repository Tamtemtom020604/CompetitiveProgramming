# Implement a function that receives two IPv4 addresses, and returns the number of addresses between them (including the first one, excluding the last one).

# All inputs will be valid IPv4 addresses in the form of strings. The last address will always be greater than the first one.

# Examples
# * With input "10.0.0.0", "10.0.0.50"  => return   50 
# * With input "10.0.0.0", "10.0.1.0"   => return  256 
# * With input "20.0.0.10", "20.0.1.0"  => return  246

def ips_between(start, end):
    a = start.split('.')
    b = end.split('.')
    return int(b[3])-int(a[3]) + 256*(int(b[2])-int(a[2])) + 256*256*(int(b[1])-int(a[1])) + 256*256*256*(int(b[0])-int(a[0]))
     

print(ips_between("10.0.0.0", "10.0.0.50"))
print(ips_between("20.0.0.10", "20.0.1.0"))