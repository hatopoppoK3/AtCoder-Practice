X, A, B = map(int, input().split())
if 0 <= A - B:
    print("delicious")
elif B - A <= X:
    print("safe")
else:
    print("dangerous")
