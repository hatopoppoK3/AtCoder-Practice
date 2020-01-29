a, b = map(int, input().split())
ans = [str(a)*b, a*str(b)]
ans.sort()
print(ans[0])
