while True:
    N = int(input())
    if N == 0:
        exit()
    elif N == 1:
        print(1)
    elif N == 2:
        print(1)
    else:
        dp = [0 for i in range(0, N+1)]
        dp[0] = 1
        dp[1] = dp[0]
        dp[2] = dp[0]+dp[1]
        for i in range(3, N+1):
            dp[i] = dp[i-3]+dp[i-2]+dp[i-1]
        ans = dp[N]//3650
        if dp[N] % 3650 == 0:
            print(ans)
        else:
            print(ans+1)
