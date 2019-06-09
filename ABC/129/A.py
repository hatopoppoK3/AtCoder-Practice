P, Q, R = map(int, input().split())
x = P+Q
y = Q+R
z = R+P
print(min(x, y, z))
