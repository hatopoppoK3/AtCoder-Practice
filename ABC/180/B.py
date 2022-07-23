from math import sqrt


N = int(input())
X = list(map(int, input().split()))
ans = [0, 0, 0]

for x in X:
    ans[0] += abs(x)
    ans[1] += x**2
    ans[2] = max(ans[2], abs(x))

print(ans[0])
print(sqrt(ans[1]))
print(ans[2])
