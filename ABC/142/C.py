from operator import itemgetter

N = int(input())
A = list(map(int, input().split()))
ans = []
for i in range(1, N+1):
    ans.append([i, A[i-1]])
ans.sort(key=itemgetter(1))
for i in range(0, N-1):
    print(str(ans[i][0]), end=" ")
print(str(ans[N-1][0]))
