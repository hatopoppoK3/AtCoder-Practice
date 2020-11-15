from collections import Counter

N = int(input())
ans = Counter()
for i in range(0, N):
    c = str(input())
    ans[c] += 1
print('AC x {}'.format(ans['AC']))
print('WA x {}'.format(ans['WA']))
print('TLE x {}'.format(ans['TLE']))
print('RE x {}'.format(ans['RE']))
