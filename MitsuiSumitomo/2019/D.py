N = int(input())
S = str(input())
ans = 0
for i in range(0, 1000):
    x = str(i).zfill(3)
    try:
        idx1 = S.index(x[0])
        idx2 = S.index(x[1], idx1+1)
        idx3 = S.index(x[2], idx2+1)
        ans += 1
    except ValueError:
        continue
print(ans)
