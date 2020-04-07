S, L, R = map(int, input().split())
if (L <= S)and(S <= R):
    print(S)
else:
    if R < S:
        print(R)
    else:
        print(L)
