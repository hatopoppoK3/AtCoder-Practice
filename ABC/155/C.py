from collections import Counter

N = int(input())
counter = Counter()
for i in range(0, N):
    counter[str(input())] += 1
A = max(counter.values())
S = []
for a, b in counter.items():
    if A == b:
        S.append(a)
S.sort()
for s in S:
    print(s)
