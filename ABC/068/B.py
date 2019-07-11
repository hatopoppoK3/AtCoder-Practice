N = int(input())
ans = 0
for i in range(0, 7):
    ans = i if N >> i & 1 else ans
print(1<<ans)
