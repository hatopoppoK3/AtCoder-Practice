from math import ceil

N = int(input())
A, B = map(int, input().split())
ans = 1
for i in range(1, N):
    x, y = map(int, input().split())
    ans = max(A//x+min(1, A%x), B//y+min(1, B%y))
    A = ans*x
    B = ans*y
print(A+B)
