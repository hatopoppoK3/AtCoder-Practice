N = int(input())
index = [i for i in range(2, 101, 2)]
if N & 1:
    ans = int(index.index(N-1)) * (N - 1) + 1
else:
    ans = int(index.index(N)) * N
print(ans)
