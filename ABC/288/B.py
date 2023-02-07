N, K = map(int, input().split())
S = []
for i in range(0, N):
    S.append(str(input()))

s = S[0:K]
s.sort()
print(*s, sep="\n")
