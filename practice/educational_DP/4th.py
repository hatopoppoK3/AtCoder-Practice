N, W = map(int, input().split())
w = []
v = []
for i in range(0, N):
    x, y = map(int, input().split())
    w.append(x)
    v.append(y)
dp = [[0 for i in range(0, W+1)] for i in range(0, N+1)]
for i in range(1, N+1):
    for j in range(0, W+1):
        if w[i-1] <= j:
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]]+v[i-1])
        else:
            dp[i][j] = dp[i-1][j]
print(dp[N][W])
