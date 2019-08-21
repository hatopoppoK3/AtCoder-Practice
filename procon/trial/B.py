N, K = map(int, input().split())
A = list(map(int, input().split()))
A = sorted(A)
ans = 0
for i in range(0, K):
    ans += (A[i]+i)
print(ans)
