S = str(input())
s = S*2
A = [s[i:i+len(S)] for i in range(0, len(S))]
A.sort()
print(A[0])
print(A[-1])
