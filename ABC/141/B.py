S = str(input())
SL = ["L", "U", "D"]
SR = ["R", "U", "D"]
for i in range(0, len(S)):
    if i & 1:
        if not(S[i] in SL):
            print("No")
            exit()
    else:
        if not(S[i] in SR):
            print("No")
            exit()
print("Yes")
