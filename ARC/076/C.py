from math import factorial

N, M = map(int, input().split())
ans = factorial(N)*factorial(M)
if abs(N-M) == 1:
    print(ans % (10**9+7))
elif N == M:
    print((ans*2) % (10**9+7))
else:
    print(0)
