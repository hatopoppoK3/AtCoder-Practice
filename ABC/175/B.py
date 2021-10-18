N = int(input())
L = list(map(int, input().split()))
if N < 3:
    print(0)
    exit(0)

L.sort()
X = []
for i in range(0, N-2):
    for j in range(1+i, N-1):
        for k in range(j+1, N):
            X.append(tuple([L[i], L[j], L[k]]))

ans = 0
for x in X:
    if (x[0] == x[1]) or (x[1] == x[2]) or (x[0] == x[2]):
        continue
    if (x[1]-x[0] < x[2]) and (x[0]+x[1] > x[2]):
        ans += 1
print(ans)
