n = int(input())
arr= []
for i in range(n):
    tmp = int(input())
    arr.append(tmp)

arr.sort()
answer = arr[n-1]
for i in range(n):
    weight = arr[i] * (n-i)
    if weight>= answer:
        answer= weight
    


print(answer)