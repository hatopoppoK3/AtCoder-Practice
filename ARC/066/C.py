N = int(input())
A = list(map(int, input().split()))
A.sort()
if N & 1:
    if A[0] == 0:
        for i in range(1, N, 2):
            if A[i] != (i+1):
                print(0)
                exit()
    else:
        print(0)
        exit()
else:
    for i in range(0, N, 2):
        if A[i] != (i+1):
            print(0)
            exit()
print(pow(2, N//2, 10**9+7))
