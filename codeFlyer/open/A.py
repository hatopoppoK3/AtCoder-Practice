N = int(input())
ans = []
for i in range(0, N):
    p = int(input())
    count = 0
    while(not(p % 10)):
        p //= 10
        count += 1
    ans.append(count)
print(min(ans))
