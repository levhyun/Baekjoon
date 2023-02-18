import sys
input = sys.stdin.readline
print = sys.stdout.write

sugar = int(input())
cnt = 0

while sugar >= 0 :
    if sugar % 5 == 0:
        cnt += sugar//5
        print('%d' % cnt)
        break
    sugar -= 3
    cnt += 1
else :
    print('-1')