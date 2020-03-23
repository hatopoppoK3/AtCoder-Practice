S = str(input())
s = S[::-1]
if S == s:
    A = S[:len(S)//2]
    a = A[::-1]
    B = S[len(S)//2+1:]
    b = B[::-1]
    if (A == a)and(B == b):
        print('Yes')
        exit(0)
print('No')
