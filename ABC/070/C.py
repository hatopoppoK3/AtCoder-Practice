from fractions import gcd

N = int(input())
T = set()
for i in range(0, N):
    T.add(int(input()))
ans = 1
for i in T:
    ans = ans*i//gcd(ans, i)
print(ans)
