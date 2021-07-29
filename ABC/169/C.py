from decimal import Decimal

A, B = map(Decimal, input().split())
B *= 100
print(int((A*B)//100))
