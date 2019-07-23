N = int(input())
ans = ["111", "222", "333", "444", "555", "666", "777", "888", "999"]
if not(N % 111):
    print(ans[int(N/111) - 1])
else:
    print(ans[int(N/111)])
