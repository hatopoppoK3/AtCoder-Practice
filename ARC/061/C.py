S = str(input())
ans = 0
for i in range(0, 2**(len(S)-1)):
    s = ""
    for j in range(0, len(S)):
        s += S[j]
        if (i >> j) & 1:
            ans += int(s)
            s = ""
    ans += int(s)
print(ans)
