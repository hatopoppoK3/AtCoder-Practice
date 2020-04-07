N = int(input())
A = [[], []]
for i in range(0, N):
    a, b = map(str, input().split())
    if b == 'R':
        A[0].append(int(a))
    else:
        A[1].append(int(a))
for i in range(0, 2):
    A[i].sort()
    for a in A[i]:
        print(a)
