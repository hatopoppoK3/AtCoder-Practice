from itertools import combinations_with_replacement

N, M, Q = map(int, input().split())
X = []
for i in range(0, Q):
    X.append(list(map(int, input().split())))
sample = list(combinations_with_replacement(range(1, M+1), N))
ans = 0
for s in sample:
    tmp = 0
    for x in X:
        if s[x[1]-1]-s[x[0]-1] == x[2]:
            tmp += x[3]
    ans = max(tmp, ans)
print(ans)
