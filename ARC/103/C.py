from collections import Counter

N = int(input())
V = tuple(map(int, input().split()))
X, Y = Counter(), Counter()
for i in range(0, N):
    if i & 1:
        Y[V[i]] += 1
    else:
        X[V[i]] += 1

x = sorted(X.items(), reverse=True, key=lambda x: x[1])[:2]
y = sorted(Y.items(), reverse=True, key=lambda x: x[1])[:2]
if x[0][0] == y[0][0]:
    ans = N
    tmp = 0
    for i in range(0, N):
        if i & 1:
            if V[i] != y[1][0]:
                tmp += 1
        else:
            if V[i] != x[0][0]:
                tmp += 1
    ans = min(ans, tmp)
    tmp = 0
    for i in range(0, N):
        if i & 1:
            if V[i] != y[0][0]:
                tmp += 1
        else:
            if V[i] != x[1][0]:
                tmp += 1
    ans = min(ans, tmp)
else:
    ans = 0
    for i in range(0, N):
        if i & 1:
            if V[i] != y[0][0]:
                ans += 1
        else:
            if V[i] != x[0][0]:
                ans += 1
print(ans)
