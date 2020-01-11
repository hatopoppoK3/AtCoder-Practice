N = int(input())
A = list(map(int, input().split()))
dp = [10**10 for i in range(0, N)]
dp[0] = 0
dp[1] = min(dp[1], dp[0]+abs(A[1]-A[0]))
for i in range(2, N):
    dp[i] = min(dp[i], dp[i-1]+abs(A[i]-A[i-1]))
    dp[i] = min(dp[i], dp[i-2]+abs(A[i]-A[i-2]))
print(dp[N-1])
