from math import sqrt

N = int(input())
ans = len(str(N))
for i in range(1, int(sqrt(N))+1):
    if N % i == 0:
        B = N//i
        ans = min(ans, max(len(str(i)), len(str(B))))
print(ans)
