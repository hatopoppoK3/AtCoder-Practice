N, M = map(int, input().split())
x = 1900*M+100*(N-M)
p = 2**(-M)
print(int(x//p))
