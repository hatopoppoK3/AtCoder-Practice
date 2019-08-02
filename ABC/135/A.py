A, B = map(int, input().split())
if not((A + B) % 2):
    print((A + B) // 2)
else:
    print("IMPOSSIBLE")
