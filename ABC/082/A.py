a, b = map(float, input().split())
if int((a + b) / 2) < ((a + b) / 2):
    print(int((a + b) / 2) + 1)
else:
    print(int((a + b) / 2))
