N = int(input())
X = list(map(int, input().split()))
P = sum(X)//N
ans1 = 0
ans2 = 0
for x in X:
    ans1 += (P-x)**2
    ans2 += (P+1-x)**2
print(min(ans1, ans2))
