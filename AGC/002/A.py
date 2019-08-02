a, b = map(int, input().split())
if (a <= 0) and (b >= 0):
    print("Zero")
elif (a < 0) and (b < 0):
    if (b - a + 1) % 2:
        print("Negative")
    else:
        print("Positive")
else:
    print("Positive")
