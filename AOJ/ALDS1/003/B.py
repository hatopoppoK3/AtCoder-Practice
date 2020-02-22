N, Q = map(int, input().split())
X = []
for i in range(0, N):
    x, y = map(str, input().split())
    X.append([x, int(y)])
ans = []
time = 0
while len(X) != 1:
    tmp = X.pop(0)
    if tmp[1] <= Q:
        time += tmp[1]
        ans.append([tmp[0], time])
    else:
        time += Q
        tmp[1] -= Q
        X.append(tmp)
ans.append([X[0][0], time+X[0][1]])
for i in range(0, N):
    print(ans[i][0], ans[i][1])
