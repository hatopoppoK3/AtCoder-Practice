A, B = map(int, input().split())
ans = max(A, B)
if ans == A:
    A = A-1
else:
    B = B-1
print(ans + max(A, B))
