a = list(map(int, input().split()))
A = [a]
ans = 0
while True:
    if (A[-1][0] & 1)or(A[-1][1] & 1)or(A[-1][2] & 1):
        print(ans)
        break
    tmp = [A[-1][1]//2+A[-1][2]//2, A[-1][0]//2 +
           A[-1][2]//2, A[-1][0]//2+A[-1][1]//2]
    if tmp in A:
        print(-1)
        break
    A.append(tmp)
    ans += 1
