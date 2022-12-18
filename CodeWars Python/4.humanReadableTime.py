# Write a function, which takes a non-negative integer (seconds) as input and returns the time in a human-readable format (HH:MM:SS)

# HH = hours, padded to 2 digits, range: 00 - 99
# MM = minutes, padded to 2 digits, range: 00 - 59
# SS = seconds, padded to 2 digits, range: 00 - 59
# The maximum time never exceeds 359999 (99:59:59)

# You can find some examples in the test fixtures.

def make_readable(seconds):
    if seconds/3600 < 10 :
        HH = '0' + str(int(seconds/3600))
    else : 
        HH = str(int(seconds/3600))
    if (seconds%3600)/60 < 10 :
        MM = '0' + str(int((seconds%3600)/60))
    else : 
        MM = str(int((seconds%3600)/60))
    if (seconds%3600)%60 < 10 :
        SS = '0' + str((seconds%3600)%60)
    else : 
        SS = str((seconds%3600)%60)
    return HH + ':' + MM + ':' + SS

print(make_readable(86399))
print(make_readable(359999))