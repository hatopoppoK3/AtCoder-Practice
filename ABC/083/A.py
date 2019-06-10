A, B, C, D = map(int, input().split())
if (A + B) < (C + D):
    print("Right")
elif (C + D) < (A + B):
    print("Left")
else:
    print("Balanced")
