X, Y = map(int, input().split())
for i in range(0, X+1):
    if (2*i+4*(X-i) == Y):
        print('Yes')
        exit(0)
print('No')
