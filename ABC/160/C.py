K, N = map(int, input().split())
A = list(map(int, input().split()))
A.append(A[0]+K)
X = []
for i in range(1, N+1):
    X.append(A[i]-A[i-1])
print(sum(X)-max(X))
