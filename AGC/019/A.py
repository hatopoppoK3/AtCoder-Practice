Q, H, S, D = map(int, input().split())
N = int(input())
Q *= 4
H *= 2
ans = 0
if N & 1:
    ans += min(Q, H, S)
ans += min(2*Q, 2*H, 2*S, D)*(N//2)
print(ans)
