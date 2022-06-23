M = int(input())
arr = [1, 2, 3]
for i in range(M):
    x,y = map(int, input().split())
    idx1 = arr.index(x)
    idx2 = arr.index(y)
    arr[idx1], arr[idx2] = arr[idx2], arr[idx1]
print(arr[0])
    