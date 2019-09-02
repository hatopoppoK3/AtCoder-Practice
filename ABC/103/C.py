from fractions import gcd

N = int(input())
A = list(map(int, input().split()))
Amax = 1
for a in A:
    Amax = Amax*a//gcd(Amax, a)
Amax -= 1
ans = 0
for a in A:
    ans += (Amax % a)
print(ans)
