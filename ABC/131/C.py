from fractions import gcd

A, B, C, D = map(int, input().split())
CD = C * D // gcd(C, D)
print((B - B//C - B//D + B//CD) - (A - 1 - (A - 1)//C - (A - 1)//D + (A - 1)//CD))
