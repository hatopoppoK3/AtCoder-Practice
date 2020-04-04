N, M = map(int, input().split())
A = list(map(int, input().split()))
total = sum(A)
cnt = 0
for i in range(0, N):
    if A[i] < (total/(4*M)):
        continue
    cnt += 1
if cnt >= M:
    print('Yes')
else:
    print('No')
