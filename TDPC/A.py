N = int(input())
P = list(map(int, input().split()))
dp = [False for i in range(0, sum(P)+1)]
dp[0] = True
for i in range(0, N):
    for j in range(sum(P)-P[i], -1, -1):
        dp[j+P[i]] = dp[j+P[i]] | dp[j]
print(dp.count(True))
