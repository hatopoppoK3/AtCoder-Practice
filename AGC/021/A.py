N = int(input())
ans = int(str(N)[0])-1
ans += (len(str(N))-1)*9
if int(str(N)[0]+str('9'*(len(str(N))-1))) == N:
    ans += 1
print(ans)
