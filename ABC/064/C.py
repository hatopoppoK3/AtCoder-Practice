N = int(input())
A = list(map(int, input().split()))
B = {}
for i in range(0, 13):
    B[i] = 0
for i in A:
    B[i//400] += 1
ansA = 0
ansB = 0
for i in range(0, 13):
    if i < 8:
        if B[i] > 0:
            ansA += 1
            ansB += 1
    else:
        if B[i] > 0:
            ansB += B[i]
if min(A) >= 3200:
    ansA += 1
print(ansA, ansB)
