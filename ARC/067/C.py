from collections import Counter

N = int(input())
count = Counter()
for i in range(2, N+1):
    while i != 1:
        for j in range(2, N+1):
            if i % j == 0:
                i //= j
                count[j] += 1
                break
ans = 1
for x in count.values():
    ans *= (x+1)
    ans %= 10**9+7
print(ans)
