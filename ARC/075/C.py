N = int(input())
A = []
ans = 0
for i in range(0, N):
    A.append(int(input()))
    ans += A[i]
A.sort()
if (ans % 10) != 0:
    print(ans)
else:
    s = [a for a in A if a % 10 != 0]
    if len(s) == 0:
        print(0)
    else:
        print(ans-s[0])
