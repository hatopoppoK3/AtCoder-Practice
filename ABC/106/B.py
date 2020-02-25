N = int(input())
if N < 105:
    print(0)
else:
    ans = 1
    for a in range(107, N+1, 2):
        tmp = 2
        for b in range(2, a//2):
            if a % b == 0:
                tmp += 1
        if tmp == 8:
            ans += 1
    print(ans)
