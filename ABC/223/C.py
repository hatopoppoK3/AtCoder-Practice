N = int(input())
A = []
B = []
X = 0
ans = 0
for i in range(0, N):
    a, b = map(int, input().split())
    X += a/b
    A.append(a)
    B.append(b)
X /= 2
for i in range(0, N):
    if X >= A[i]/B[i]:
        X -= A[i]/B[i]
        ans += A[i]
    else:
        ans += B[i]*X
        print(ans)
        break
