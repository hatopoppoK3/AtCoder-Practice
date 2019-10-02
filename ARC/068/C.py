x = int(input())
a = x//11
if x % 11 == 0:
    print(2*a)
elif x % 11 > 6:
    print(2*a+2)
else:
    print(2*a+1)
