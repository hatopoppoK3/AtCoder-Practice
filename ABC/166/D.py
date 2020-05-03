X = int(input())
Y = [i**5 for i in range(0, 501)]
for i in range(0, 501):
    for j in range(0, 501):
        if (Y[i]-Y[j] == X):
            print('{0} {1}'.format(i, j))
            exit(0)
        if (Y[i]+Y[j] == X):
            print('{0} {1}'.format(i, -j))
            exit(0)
