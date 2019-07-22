A, B, K = map(int, input().split())
ans = []
for i in range(1, min(A, B) + 1):
    if (not(A % i)) and (not(B % i)):
        ans.append(i)
print(sorted(ans)[-K])
