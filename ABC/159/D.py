from collections import Counter

N = int(input())
A = list(map(int, input().split()))
a = Counter(A)
tmp = 0
for x, y in a.items():
    if y != 0:
        tmp += y*(y-1)//2
ans = {}
for x, y in a.items():
    if y > 1:
        ans[x] = tmp-(y-1)
    else:
        ans[x] = tmp
for x in A:
    print(ans[x])
