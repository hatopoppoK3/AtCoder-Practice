K, X = map(int, input().split())
ans = []
for i in range(X-K+1, X+K):
    if (-1000000 <= i) and (i <= 1000000):
        ans.append(i)
print(*ans)
