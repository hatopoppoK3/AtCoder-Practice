N = int(input())
S = str(input())
ans = [0 for i in range(0, N + 1)]
for i in range(0, N):
    if S[i] == "I":
        ans[i + 1] = ans[i] + 1
    else:
        ans[i + 1] = ans[i] - 1
print(max(ans))
