N = int(input())
A = list(map(int, input().split()))
Q = int(input())
M = list(map(int, input().split()))
ans = set()
for i in range(1, (1 << N)):
    tmp = 0
    for j in range(0, N):
        if (i >> j) & 1:
            tmp += A[j]
    ans.add(tmp)
for m in M:
    if m in ans:
        print('yes')
    else:
        print('no')
