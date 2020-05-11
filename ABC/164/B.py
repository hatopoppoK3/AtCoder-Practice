from math import ceil

A, B, C, D = map(int, input().split())
if ceil(A/D) < ceil(C/B):
    print('No')
else:
    print('Yes')
