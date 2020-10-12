def binary_search(arr, tar, start, end):
    while start <= end:
        mid = (start+ end ) // 2
        if (arr[mid] == tar):
            return 1
        elif arr[mid] > tar:
            end = mid-1
        else:
            start = mid +1
    
    return 0

n = int(input())
arr = list(map(int, input().split()))
m = int(input())
arr2 = list(map(int, input().split()))
arr.sort()
for num in arr2:
    print(binary_search(arr, num, 0, n-1))
