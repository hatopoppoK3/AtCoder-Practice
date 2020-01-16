import itertools

N = int(input())
P = list(map(int, input().split()))
Q = list(map(int, input().split()))
ans = [list(v) for v in itertools.permutations(sorted(P))]
print(abs(ans.index(P)-ans.index(Q)))
