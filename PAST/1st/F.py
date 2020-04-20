S = str(input())
tmp = ''
A = []
idx = 0
while idx != len(S):
    if len(tmp) != 0:
        if S[idx].isupper():
            tmp += S[idx]
            A.append(tmp)
            tmp = ''
        else:
            tmp += S[idx]
    else:
        tmp += S[idx]
    idx += 1
A.sort(key=lambda s: s.lower())
print(''.join(A))
