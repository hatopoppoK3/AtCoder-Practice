S = str(input())
ans = set([S[i] for i in range(0, 4)])
if (S.count(ans.pop()) == 2) and (S.count(ans.pop()) == 2):
    print("Yes")
else:
    print("No")
