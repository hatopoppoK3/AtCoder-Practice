N = int(input())
ans = 0
for i in range(1, N + 1):
    tmp = str(i)
    if len(tmp) & 1:
        ans += 1
print(ans)
