from collections import Counter

N = int(input())
A = Counter(map(int, input().split()))
ans = 0
for x, y in A.items():
    if x > y:
        ans += y
    elif x < y:
        ans += (y-x)
print(ans)
