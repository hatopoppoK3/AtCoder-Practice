from math import ceil

H, W = map(int, input().split())
if (H == 1)or(W == 1):
    print(1)
    exit(0)
ans = H*W
if ans & 1:
    print(ceil(ans/2))
else:
    print(ans//2)
