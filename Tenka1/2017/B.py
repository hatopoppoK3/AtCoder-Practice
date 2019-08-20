N = int(input())
A = []
B = []
for i in range(0, N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)
print(max(A)+min(B))
