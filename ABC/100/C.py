N = int(input())
A = list(map(int, input().split()))
ans = 0
for a in A:
    tmp = 1
    while(a > tmp):
        tmp = tmp << 1
        if a % tmp == 0:
            ans += 1
print(ans)
