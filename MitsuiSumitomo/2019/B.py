N = int(input())
X = N//1.08 + 1
ans = int(X*1.08)
if ans == N:
    print(int(X))
else:
    print(':(')
