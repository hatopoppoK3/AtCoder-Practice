S = str(input())
ans = 752
for i in range(1, len(S) - 1):
    tmp = int(S[i - 1: i + 2])
    if (abs(753 - tmp)) < ans:
        ans = abs(753 - tmp)
print(ans)
