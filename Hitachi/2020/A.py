S = str(input())
if len(S) & 1:
    print('No')
    exit(0)
A = ['h', 'i']
for i in range(0, len(S)):
    if S[i] != A[i % 2]:
        print('No')
        exit(0)
print('Yes')
