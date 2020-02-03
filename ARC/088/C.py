X, Y = map(int, input().split())
ans = 0
number = X
while number <= Y:
    number *= 2
    ans += 1
print(ans)
