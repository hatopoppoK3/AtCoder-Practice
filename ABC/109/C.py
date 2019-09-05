from fractions import gcd

N, X = map(int, input().split())
x = list(map(int, input().split()))
ans = abs(x[0]-X)
for i in range(1, N):
    k = abs(x[i]-X)
    ans = gcd(ans, k)
print(ans)
