from collections import deque

m, n = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
q = deque([])
move_x, move_y = [-1, 1, 0, 0], [0, 0, -1, 1]
res = 0

for i in range(n):
    for j in range(m):
        if arr[i][j] == 1:
            q.append([i, j])

while q:
    x, y = q.popleft()
    for i in range(4):
        change_x, change_y = move_x[i] + x, move_y[i] + y
        if 0 <= change_x < n and 0 <= change_y < m and arr[change_x][change_y] == 0:
            arr[change_x][change_y] = arr[x][y] + 1
            q.append([change_x, change_y])

for i in arr:
    for j in i:
        if j == 0:
            print(-1)
            exit(0)
    res = max(res, max(i))
print(res - 1)