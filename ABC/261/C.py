N = int(input())
S = {}
for i in range(0, N):
    s = str(input())
    if s in S:
        print(f'{s}({S[s]})')
        S[s] += 1
    else:
        print(s)
        S[s] = 1
