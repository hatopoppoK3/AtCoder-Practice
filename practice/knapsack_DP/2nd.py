N, W = map(int, input().split())
weight = list(map(int, input().split()))
values = list(map(int, input().split()))
dp = []
for i in range(0, N+1):
    tmp = []
    for w in range(0, W+1):
        tmp.append(0)
    dp.append(tmp)

for i in range(0, N):
    for w in range(0, W+1):
        if weight[i] <= w:
            dp[i+1][w] = max(dp[i][w-weight[i]]+values[i], dp[i][w])
        else:
            dp[i+1][w] = dp[i][w]

print(dp[N][W])
