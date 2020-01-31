N, K = map(int, input().split())
H = list(map(int, input().split()))
if N <= K:
    print(0)
    exit()
H.sort()
print(sum(H[:N-K]))
