while True:
    N, X = map(int, input().split())
    if(N == 0)and(X == 0):
        exit(0)
    ans = 0
    for a in range(1, N-1):
        for b in range(a+1, N):
            for c in range(b+1, N+1):
                if a+b+c == X:
                    ans += 1
    print(ans)
