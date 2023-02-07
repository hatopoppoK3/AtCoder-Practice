N = int(input())
L = []
for i in range(0, N):
    L.append(str(input()))

for i in range(0, N):
    for j in range(i+1, N):
        if (L[i][j] == 'W') and (L[j][i] != 'L'):
            print('incorrect')
            exit(0)
        elif (L[i][j] == 'L') and (L[j][i] != 'W'):
            print('incorrect')
            exit(0)
        elif (L[i][j] == 'D') and (L[j][i] != 'D'):
            print('incorrect')
            exit(0)

print('correct')
