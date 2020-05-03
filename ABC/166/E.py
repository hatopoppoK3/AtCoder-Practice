from collections import Counter

N = int(input())
A = list(map(int, input().split()))
X = []
Y = Counter()
for i in range(1, N+1):
    X.append(i-A[i-1])
    Y[A[i-1]+i] += 1
ans = 0
for x in X:
    if x < 2:
        continue
    ans += Y[x]
print(ans)
