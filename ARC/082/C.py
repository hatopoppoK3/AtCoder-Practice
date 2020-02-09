N = int(input())
A = list(map(int, input().split()))
count_list = [0 for i in range(0, 10**5+1)]
for a in A:
    for i in range(-1, 2, 1):
        if a+i >= 0:
            count_list[a+i] += 1
print(max(count_list))
