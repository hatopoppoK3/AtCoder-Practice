N, M = map(int, input().split())
S = [str(input()) for _ in range(0, N)]
T = [str(input()) for _ in range(0, M)]
ans = 0

for s in S:
    for t in T:
        if (s[-3:] == t):
            ans += 1
            break

print(ans)
