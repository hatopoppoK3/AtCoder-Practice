N = int(input())
A = list(map(int, input().split()))
ans = 1
tmp = A[0]
for i in range(1, N):
    if tmp < A[i]:
        tmp = A[i]
        ans += 1
print(ans)
