N = int(input())
S = []
for i in range(0, N):
    S.append(str(input()))

if (S.count("For") > N//2):
    print("Yes")
else:
    print("No")
