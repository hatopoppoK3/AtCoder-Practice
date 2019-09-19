N = int(input())
H = list(map(int, input().split()))
if N == 1:
    print("Yes")
    exit()
top = 0
for i in range(0, N-1):
    top = max(H[i], top)
    if (top-H[i+1]) > 1:
        print("No")
        exit()
print("Yes")
