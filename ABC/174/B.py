from math import sqrt

N, D = map(int, input().split())
cnt = 0
for i in range(0, N):
    x, y = map(int, input().split())
    if sqrt(x**2+y**2) <= D:
        cnt += 1
print(cnt)
