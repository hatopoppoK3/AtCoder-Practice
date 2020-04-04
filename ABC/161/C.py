N, K = map(int, input().split())
A = N % K
B = abs((N % K)-K)
print(min(A, B))
