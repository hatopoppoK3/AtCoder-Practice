K = int(input())
S = str(input())
if len(S) > K:
    S = S[:K]+'...'
print(S)
