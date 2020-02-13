from collections import Counter

N, K = map(int, input().split())
A = Counter(map(int, input().split()))
if len(A) <= K:
    print(0)
    exit(0)
ans = 0
Y = list(sorted(A.items(), key=lambda x: x[1]))
for i in range(0, len(A)-K):
    ans += Y[i][1]
print(ans)
