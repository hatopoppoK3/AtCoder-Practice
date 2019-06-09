N = str(input())
try:
    N.index("9")
    print("Yes")
except ValueError:
    print("No")
