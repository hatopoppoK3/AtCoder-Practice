A, B = map(int, input().split())
S = str(input())
if (A <= len(S)) and (len(S) <= B):
    print("YES")
else:
    print("NO")
