N = int(input())
P = []
for i in range(0, N):
    P.insert(i, int(input()))
P = sorted(P)
print(sum(P) - int(P[len(P) - 1] / 2))
