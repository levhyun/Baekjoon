import sys

def mergeSort(left, right):
    global swap, array
    if left < right:
        mid = (left + right) // 2
        mergeSort(left, mid)
        mergeSort(mid + 1, right)
        i, j, temp = left, mid + 1, []
        while i <= mid and j <= right:
            if array[i] <= array[j]:
                temp.append(array[i])
                i += 1
            else:
                temp.append(array[j])
                j += 1
                swap += mid - i + 1
        if i <= mid:
            temp = temp + array[i : mid + 1]
        if j <= right:
            temp = temp + array[j : right + 1]
        for i in range(len(temp)):
            array[left + i] = temp[i]

swap = 0
num = int(sys.stdin.readline())
array = list(map(int, sys.stdin.readline().split()))
mergeSort(0, num - 1)
print(swap)