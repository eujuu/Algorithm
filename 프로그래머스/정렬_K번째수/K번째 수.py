def solution(array, commands):
    answer = []
    arr = []
    for i in range(len(commands)):
        arr = array
        arr = arr[commands[i][0]-1:commands[i][1]]
        
        arr.sort()
        #print(arr)

        answer.append(arr[commands[i][2]-1])
    return answer