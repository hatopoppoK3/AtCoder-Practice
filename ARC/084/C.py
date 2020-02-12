from bisect import bisect_left, bisect_right

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
A.sort()
C.sort()
ans = 0
for i in range(0, N):
    ans += (bisect_left(A, B[i])*(N-bisect_right(C, B[i])))
print(ans)
