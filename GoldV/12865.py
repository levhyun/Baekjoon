n, k = map(int, input().split())

arr = [[0,0]]
my_bag = [[0]*(k+1) for _ in range(n+1)]

for i in range(n):
    arr.append(list(map(int, input().split())))

for i in range(1, n+1):
    for j in range(1, k+1):
        w = arr[i][0]
        v = arr[i][1]

        if j < w:
            my_bag[i][j] = my_bag[i-1][j]
        else:
            my_bag[i][j] = max(my_bag[i-1][j], my_bag[i-1][j-w]+v)

print(my_bag[n][k])