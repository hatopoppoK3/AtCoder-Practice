X = list(map(int, input().split()))
ans = [0 for i in range(0, 101)]
for i in range(X[0], X[1]):
    ans[i] += 1
for i in range(X[2], X[3]):
    ans[i] += 1
print(ans.count(2))
