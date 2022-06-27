N , M = map(int, input().split())
arr = []
for i in range(N+1):
    arr.append(i)
    
for i in range(M):
    i, j = map(int, input().split())
    arr[i], arr[j] = arr[j], arr[i]
    
for i in range(1, N+1):
    print(arr[i], end = ' ')