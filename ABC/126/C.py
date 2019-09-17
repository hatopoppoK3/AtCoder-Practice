from math import ceil

N, K = map(int, input().split())
ans = 0
for i in range(1, N+1):
    A = ceil(K/i)
    B = 1
    while(B < A):
        B = B << 1
    ans += 1/(N*B)
print(ans)
