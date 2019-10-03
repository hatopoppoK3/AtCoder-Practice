N = int(input())
B = list(map(int, input().split()))
ans = [B[0]]
for i in range(1, N-1):
    ans.append(min(B[i-1],B[i]))
print(sum(ans)+B[-1])
