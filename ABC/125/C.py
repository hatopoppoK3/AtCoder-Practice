from fractions import gcd

N = int(input())
A = list(map(int, input().split()))
L = [0]
for i in range(1, N):
    L.append(gcd(A[i-1], L[i-1]))
R = [0]
for i in range(1, N):
    R.append(gcd(R[i-1], A[N-i]))
R.reverse()
ans = []
for i in range(0, N):
    ans.append(gcd(L[i], R[i]))
print(max(ans))
