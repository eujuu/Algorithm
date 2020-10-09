# binary search python

def binary_search_recursion(array, target, start, end): #재귀
    if start > end:
        return None
    mid = (start + end) // 2
    
    if array[mid] == traget: # 찾은 경우 중간점 인덱스 반환
        return mid
    elif array[mid] > target: #중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
        return binary_search(array, target, start, mid - 1)
    else: # 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인
        return binary_search(array, target, mid+1, end)

def binary_search(array, target, start, end): # 반복문
    while start <= end:
        mid = (start + end) //2 
        if array[mid] == target: # 찾은 경우 중간점 인덱스 반환
            return mid
        elif array[mid] > target: #중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
            end = mid-1
        else: # 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인
            start = mid + 1
    return None



# n(원소의 개수)과 target(찾고자 하는 값) 을 입력        
n, target = list(map(int, input().split()))
# 전체 원소 입력
array = list(map(int, input().split()))

result1 = binary_search_recursion(arrat, target, 0, n-1)
result2 = binary_search(arrat, target, 0, n-1)
if result1 == None:
    print ("원소 존재x")
else: 
    print(result1 + 1)