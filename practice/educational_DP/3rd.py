N = int(input())
X = []
for i in range(0, N):
    x = list(map(int, input().split()))
    X.append(x)
dp = []
for i in range(0, N+1):
    dp.append([0, 0, 0])
for i in range(1, N+1):
    for j in range(0, 3):
        for k in range(0, 3):
            if j == k:
                continue
            else:
                dp[i][k] = max(dp[i][k], dp[i-1][j]+X[i-1][k])
print(max(dp[N]))
