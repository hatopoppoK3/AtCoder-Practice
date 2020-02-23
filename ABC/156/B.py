N, K = map(int, input().split())
ans = 1
while N >= pow(K, ans):
    ans += 1
print(ans)
