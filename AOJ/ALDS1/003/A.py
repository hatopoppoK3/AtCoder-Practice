X = list(map(str, input().split()))
A = []
for x in X:
    if x.isnumeric():
        A.append(int(x))
    else:
        a = A.pop()
        b = A.pop()
        if x == '+':
            A.append(a+b)
        elif x == '-':
            A.append(b-a)
        else:
            A.append(a*b)
print(A[0])
