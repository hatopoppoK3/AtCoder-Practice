sx, sy, tx, ty = map(int, input().split())
ans = ""
for i in range(sx, tx):
    ans += "R"
for i in range(sy, ty):
    ans += "U"
for i in range(sx, tx):
    ans += "L"
for i in range(sy, ty):
    ans += "D"
ans += "L"
for i in range(sy, ty+1):
    ans += "U"
for i in range(sx, tx+1):
    ans += "R"
ans += "D"
ans += "R"
for i in range(sy, ty+1):
    ans += "D"
for i in range(sx, tx+1):
    ans += "L"
ans += "U"
print(ans)
