from collections import Counter

N = int(input())
A = list(map(int, input().split()))
X = Counter()
for i in range(0, N):
    X[A[i]] += 1
width = 0
height = 0
for x, y in sorted(X.most_common(), reverse=True):
    if y >= 2:
        if y >= 4:
            width = max(width, x)
            height = max(height, x)
            break
        if width != 0:
            height = x
            break
        else:
            width = x
print(height*width)
