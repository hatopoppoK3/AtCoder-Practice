N, K = map(int, input().split())
A = list(map(int, input().split()))
a = A[0]
b = A[K-1]
ans = 0
if a*b < 0:
    ans = abs(min(-a, b)*2)+abs(max(-a, b))
else:
    ans = max(abs(a), abs(b))
for i in range(1, N-K+1):
    tmp = 0
    a = A[i]
    b = A[i+K-1]
    if a*b < 0:
        tmp = abs(min(-a, b)*2)+abs(max(-a, b))
    else:
        tmp = max(abs(a), abs(b))
    ans = min(ans, tmp)
print(ans)
