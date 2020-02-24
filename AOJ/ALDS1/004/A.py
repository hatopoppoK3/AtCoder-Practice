from collections import Counter

N = int(input())
S = Counter(map(int, input().split()))
Q = int(input())
T = Counter(map(int, input().split()))
ans = 0
if len(S) > len(T):
    for x, y in S.items():
        if x in T.keys():
            ans += min(y, T[x])
else:
    for x, y in T.items():
        if x in S.keys():
            ans += min(y, S[x])
print(ans)
