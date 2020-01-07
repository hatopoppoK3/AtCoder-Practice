from math import sqrt

N = int(input())
ans = 10**12
for i in range(1, int(sqrt(N))+1):
    if N % i == 0:
        j = N//i
        ans = min(ans, i+j)
print(ans-2)
