A, B, C, K = map(int, input().split())
if K <= A:
    print(K)
    exit(0)
K -= A
if K <= B:
    print(A)
    exit(0)
print(A-(K-B))
