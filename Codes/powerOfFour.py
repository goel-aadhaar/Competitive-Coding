def check(num):
    if(num==1):
        return "YES"
    if(num%4!=0):
        return "NO"
    return check(num/4)

print(check(36))