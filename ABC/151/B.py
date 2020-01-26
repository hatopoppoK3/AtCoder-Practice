N, K, M = map(int, input().split())
A = list(map(int, input().split()))
X = M*N
total = sum(A)
if X-total > K:
    print(-1)
else:
    if X-total >= 0:
        print(X-total)
    else:
        print(0)
