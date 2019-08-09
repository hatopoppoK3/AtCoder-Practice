N = int(input())
ans = 0
while(N > 0):
    ans += N % 10
    N //= 10
if ans == 1:
    print(10)
else:
    print(ans)
