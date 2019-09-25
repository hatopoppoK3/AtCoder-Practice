N, x = map(int, input().split())
A = list(map(int, input().split()))
ans = 0
for i in range(1, N):
    total = A[i-1]+A[i]
    if total > x:
        ans += (total-x)
        A[i] -= (total-x)
        if A[i] < 0:
            A[i] = 0
print(ans)
