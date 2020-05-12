N, K = map(int, input().split())
A = list(map(int, input().split()))
X = {1}
r = [1]
for i in range(0, N):
    idx = A[r[-1]-1]
    if K == 1:
        print(idx)
        exit(0)
    else:
        if X.isdisjoint({idx}):
            r.append(idx)
            X.add(r[-1])
            K -= 1
        else:
            R = r[r.index(idx):]
            K -= 1
            break
print(R[K % len(R)])
