X, N = map(int, input().split())
if N == 0:
    print(X)
    exit(0)
P = list(map(int, input().split()))
for i in range(0, 101):
    if not(X-i in P):
        print(X-i)
        exit(0)
    if not(X+i in P):
        print(X+i)
        exit(0)
