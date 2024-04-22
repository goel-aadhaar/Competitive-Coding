def sumOfDigits(x):
    # if x==0:
    #     return 0
    # return x%10 +sumOfDigits(x//10)
    sum=0
    for i in range(0,len(x)-1):
        sum+=ord(x[i])-ord('0')
    return sum


def superDigit(x):
    if int(x)<10:
        return x
    else:
        y=sumOfDigits(x)
        return superDigit(y)

# n=input()
# k=int(input())
n,k=map(str,input().split())
k=int(k)

print(superDigit(superDigit(n)*k))
