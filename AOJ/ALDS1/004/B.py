def func(A, x, lower, upper):
    if lower+1 == upper:
        if (A[lower] == x)or(A[upper] == x):
            return 1
        else:
            return 0
    idx = (upper+lower)//2
    if x < A[idx]:
        return func(A, x, lower, idx)
    else:
        return func(A, x, idx, upper)


N = int(input())
S = list(map(int, input().split()))
Q = int(input())
T = list(map(int, input().split()))
ans = 0
for t in T:
    ans += func(S, t, 0, N)
print(ans)
