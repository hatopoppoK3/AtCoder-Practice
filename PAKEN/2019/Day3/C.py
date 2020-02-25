N, M = map(int, input().split())
A = []
for i in range(0, N):
    a = list(map(int, input().split()))
    A.append(a)
ans = 0
for i in range(0, M-1):
    for j in range(i+1, M):
        tmp = 0
        for k in range(0, N):
            tmp += max(A[k][i], A[k][j])
        ans = max(ans, tmp)
print(ans)
