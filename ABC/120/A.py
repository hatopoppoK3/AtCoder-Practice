A, B, C = map(int, input().split())
ans = int(B/A)
if ans >= C:
    print(C)
else:
    print(ans)
