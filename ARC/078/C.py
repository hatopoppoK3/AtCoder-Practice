N = int(input())
A = list(map(int, input().split()))
B = [A[0]]
for i in range(1, N):
    B.append(A[i]+B[i-1])
ans = 1 << 50
for i in range(0, N-1):
    tmp = abs(2*B[i]-B[N-1])
    ans = min(ans, tmp)
print(ans)
