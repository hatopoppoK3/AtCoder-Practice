N = int(input())
A = list(map(int, input().split()))
K = 1
for i in range(0, N):
    K *= A[i]
L = 0
for i in range(0, N):
    L += (K/A[i])
print(K/L)
