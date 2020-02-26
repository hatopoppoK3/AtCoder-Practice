N = int(input())
A = set()
for i in range(0, N):
    x, y = map(str, input().split())
    if x == 'insert':
        A.add(y)
    else:
        if y in A:
            print('yes')
        else:
            print('no')
