H, A = map(int, input().split())
ans = H//A
if H % A == 0:
    print(ans)
else:
    print(ans+1)
