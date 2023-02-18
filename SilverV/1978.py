import sys
num = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
primeCnt = 0
for value in arr:
    cnt = 0
    if value > 1 :
        for i in range(2, value):
            if value % i == 0:
                cnt += 1 
        if cnt == 0:
            primeCnt += 1 
print(primeCnt)