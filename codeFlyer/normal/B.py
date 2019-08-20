A, B, N = map(int, input().split())
X = str(input())
for i in range(0, N):
    if(X[i] == "S"):
        A -= 1
    elif(X[i] == "C"):
        B -= 1
    else:
        if(A < B):
            B -= 1
        else:
            A -= 1
if(A < 0):
    A = 0
if(B < 0):
    B = 0
print(A)
print(B)
