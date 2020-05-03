N, K = map(int, input().split())
ans = [0 for i in range(0, N)]
for i in range(0, K):
    d = int(input())
    A = list(map(int, input().split()))
    for a in A:
        ans[a-1] += 1
print(ans.count(0))
