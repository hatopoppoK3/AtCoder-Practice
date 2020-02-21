def bubble_sort(A, N):
    A = list(A)
    for i in range(1, N):
        for j in range(0, N-i):
            if A[j][1] > A[j+1][1]:
                A[j], A[j+1] = A[j+1], A[j]
    tmp = []
    for x, y in A:
        tmp.append(x+str(y))
    return tmp


def selection_sort(A, N):
    A = list(A)
    for i in range(0, N-1):
        pivot = i
        for j in range(i+1, N):
            if A[pivot][1] > A[j][1]:
                pivot = j
        if pivot != i:
            A[pivot], A[i] = A[i], A[pivot]
    tmp = []
    for x, y in A:
        tmp.append(x+str(y))
    return tmp


N = int(input())
X = list(map(str, input().split()))
A = []
for x in X:
    A.append((x[0], int(x[1])))
A = tuple(A)
a = bubble_sort(A, N)
print(*a)
print('Stable')
b = selection_sort(A, N)
print(*b)
if a == b:
    print('Stable')
else:
    print('Not stable')
