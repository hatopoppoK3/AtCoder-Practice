A = map(int, input().split())
A = sorted(A)
ans = 0
for i in range(1, 3):
    ans += abs(A[i - 1] - A[i])
print(ans)
