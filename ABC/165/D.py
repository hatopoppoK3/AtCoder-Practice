from math import floor

A, B, N = map(int, input().split())
x = N
if B <= N:
    x = B-1
print(floor(A*x/B)-A*floor(x/B))
