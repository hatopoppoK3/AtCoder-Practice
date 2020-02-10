from fractions import gcd

N = int(input())
for i in range(0, N):
    a, b = map(int, input().split())
    print(gcd(a, b))
