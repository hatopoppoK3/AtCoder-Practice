W, a, b = map(int, input().split())
if max(a, b) <= (min(a, b) + W):
    print(0)
else:
    print(max(a, b) - (min(a, b) + W))
