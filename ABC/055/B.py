from math import factorial

N = int(input())
ans = factorial(N)
print(pow(ans, 1, (10 ** 9 + 7)))
