N, M = map(int, input().split())
ans = 0
if (M//2) < N:
    ans = M//2
else:
    ans = (2*N+M)//4
print(ans)
