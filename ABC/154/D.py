N, K = map(int, input().split())
P = list(map(int, input().split()))
A = [0, 1.0]
for i in range(2, 1001):
    A.append(A[i-1]+0.5)
index = 0
tmp = sum(P[0:K])
B = [tmp]
for i in range(K, N):
    total = B[-1]-P[i-K]+P[i]
    if tmp < total:
        index = i-K+1
        tmp = total
    B.append(total)
ans = 0
for i in range(index, index+K):
    ans += A[P[i]]
print(ans)
