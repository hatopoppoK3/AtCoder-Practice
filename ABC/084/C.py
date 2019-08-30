N = int(input())
CSF = []
for i in range(0, N-1):
    CSF.append(list(map(int, input().split())))
for i in range(0, N):
    ans = 0
    for j in range(i, N-1):
        ans = max(CSF[j][1], ans)
        if ans % CSF[j][2] != 0:
            ans += (CSF[j][2]-ans % CSF[j][2])
        ans += CSF[j][0]
    print(ans)
