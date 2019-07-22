s = int(input())
ans = [s]
flag = True
while (flag):
    if not(ans[-1] % 2):
        ans.append(int(ans[-1] / 2))
    else:
        ans.append(3 * ans[-1] + 1)
    if ans.count(ans[-1]) == 2:
        flag = False
        print(len(ans))
