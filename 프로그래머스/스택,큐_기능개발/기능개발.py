import math
def solution(progresses, speeds):
    answer = []
    arr = list([math.ceil((100-progresses[i]) / speeds[i]) for i in range(len(progresses))])
    #print(arr)
    cnt =1
    while len(arr)!=0:
        if len(arr)==1:
            answer.append(1)
            break
            
        first = arr.pop(0)
        while(len(arr)!=0 and first>=arr[0]):
            cnt+=1
            arr.pop(0)
        answer.append(cnt)
        cnt = 1
            
        
    return answer