N = int(input())
ans = set()
for i in range(0, N):
    tmp = list(map(int, input().split()))
    tmp.sort()
    ans.add(tuple(tmp))
print(len(ans))
