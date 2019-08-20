n, L, R = map(int, input().split())
A = list(map(int, input().split()))
ans = []
for i in A:
    if i < L:
        ans.append(L)
    elif i > R:
        ans.append(R)
    else:
        ans.append(i)
print(*ans)
