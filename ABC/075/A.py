ans = map(int, input().split())
ans = sorted(ans)
if ans[1] == ans[2]:
    print(ans[0])
elif ans[0] == ans[1]:
    print(ans[2])
