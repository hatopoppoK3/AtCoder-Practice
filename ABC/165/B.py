X = int(input())
x = 100
ans = 0
while True:
    ans += 1
    x *= 1.01
    x = int(x)
    if x >= X:
        print(ans)
        exit(0)
