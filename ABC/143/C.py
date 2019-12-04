N = int(input())
S = str(input())
ans = [S[0]]
for i in range(1, N):
    if ans[-1] != S[i]:
        ans.append(S[i])
print(len(ans))
