ans = ["A", "C", "A", "B", "A", "B", "A", "A", "B", "A", "B", "A"]
x, y = map(int, input().split())
if ans[x - 1] == ans[y - 1]:
    print("Yes")
else:
    print("No")
