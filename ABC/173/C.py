H, W, K = map(int, input().split())
C = []
for h in range(0, H):
    c = str(input())
    C.append(c)
ans = 0
for h in range(0, 2**H):
    for w in range(0, 2**W):
        cnt = 0
        for i in range(0, H):
            for j in range(0, W):
                if ((h >> i) & 1) and ((w >> j) & 1) and (C[i][j] == '#'):
                    cnt += 1
        if cnt == K:
            ans += 1
print(ans)
