import sys

num = int(sys.stdin.readline())
result = num

for i in range(2, round(num ** 0.5) + 1):
    if num % i == 0:
        while num % i == 0:
            num //= i
        result *= 1-(1/i)

if 1 < num:
    result *= 1-(1/num)

print(round(result))