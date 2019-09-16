S = str(input())
A = S[0]
for i in range(1, len(S)):
    if A[i-1] == "0":
        A += "1"
    else:
        A += "0"
ans = 0
for i in range(0, len(S)):
    if S[i] != A[i]:
        ans += 1
print(ans)
