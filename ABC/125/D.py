N = int(input())
A = list(map(int, input().split()))
cnt_list = [0, 0, 0]
total = 0
low = 10**9
for a in A:
    low = min(low, abs(a))
    total += abs(a)
    if a == 0:
        cnt_list[1] += 1
    elif a > 0:
        cnt_list[2] += 1
    else:
        cnt_list[0] += 1
if (cnt_list[1] > 0)or(cnt_list[0] % 2 == 0):
    print(total)
else:
    print(total-2*low)
