N, M = map(int, input().split())
P = []
S = []
flag = [False for i in range(0, N)]
for i in range(0, M):
    x, y = map(str, input().split())
    P.append(int(x)-1)
    S.append(y)
ans = [0, 0]
wa = [0 for i in range(0, N)]
for i in range(0, M):
    if not flag[P[i]]:
        if S[i] == 'AC':
            flag[P[i]] = True
            ans[0] += 1
            ans[1] += wa[P[i]]
        else:
            wa[P[i]] += 1
print(*ans)
