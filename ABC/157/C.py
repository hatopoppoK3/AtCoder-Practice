N, M = map(int, input().split())
A = []
for i in range(0, M):
    a = tuple(map(int, input().split()))
    A.append(a)
start = 10**(N-1)
if N == 1:
    start = 0
for x in range(start, 10**N):
    ans = str(x)
    flag = True
    for a in A:
        if ans[a[0]-1] != str(a[1]):
            flag = False
    if flag:
        print(x)
        exit(0)
print(-1)
