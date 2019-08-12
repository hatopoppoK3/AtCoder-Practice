N, M, K = map(int, input().split())
flag = False
for i in range(0, N+1):
    for j in range(0, M+1):
        if (i*(M-j)+j*(N-i)) == K:
            flag = True
if flag:
    print("Yes")
else:
    print("No")
