def function(a, b, x, lower, upper):
    if (lower+1) == upper:
        return lower
    ans = (upper+lower)//2
    score = a*ans+b*len(str(ans))
    if score <= x:
        return function(a, b, x, ans, upper)
    else:
        return function(a, b, x, lower, ans)


if __name__ == '__main__':
    A, B, X = map(int, input().split())
    if (A*10**9+B*len(str(10**9))) <= X:
        print(10**9)
        exit()
    print(function(A, B, X, 0, 10**9))
