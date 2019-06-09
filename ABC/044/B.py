string = input()
ans = True
for c in string:
    if string.count(c) % 2 != 0:
        ans = False

if ans:
    print("Yes")
else:
    print("No")
