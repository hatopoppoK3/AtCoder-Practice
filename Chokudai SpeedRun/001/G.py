N = int(input())
A = list(map(str, input().split()))
number = int(''.join(A))
print(number % (10**9+7))
