A, B = map(int, input().split())
if B == 1:
    print(0)
    exit(0)
ans = 1
while((ans*A)-(ans-1)) < B:
    ans += 1
print(ans)
