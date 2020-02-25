S = str(input())
X = ['A', 'C', 'G', 'T']
ans = 0
tmp = 0
for s in S:
    if s in X:
        tmp += 1
    else:
        ans = max(ans, tmp)
        tmp = 0
print(max(ans, tmp))
