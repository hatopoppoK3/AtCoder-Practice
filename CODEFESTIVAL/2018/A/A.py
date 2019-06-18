A = int(input())
B = int(input())
C = int(input())
S = int(input())
total = A + B + C
if (S == total) or (S == (total + 1)) or (S == (total + 2)) or(S == (total + 3)):
    print("Yes")
else:
    print("No")
