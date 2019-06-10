x, y = map(str, input().split())
if x < y:
    print("<")
elif y < x:
    print(">")
else:
    print("=")
