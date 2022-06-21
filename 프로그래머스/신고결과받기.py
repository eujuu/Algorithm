def solution(id_list, report, k):
    answer = []

    arr = {}
    arr2 = {}
    count = {}
    tmp = []
    tmp2 = []

    for i in id_list:
        count[i] = 0
        arr2[i] = 0
    for i in report:
        tmp.append(i.split(" "))

    for i in range(len(tmp)):
        
        if tmp[i][0] not in arr:
            tt=[]
            tt.append(tmp[i][1])
            arr[tmp[i][0]] = tt
        else:
            if tmp[i][1] not in arr[tmp[i][0]]:
                arr[tmp[i][0]].append(tmp[i][1])
  

    for key, value in arr.items():
        for i in value:
            count[i]+=1

    for key, value in count.items():
        if value>=k:
            tmp2.append(key)

    for i in tmp2:
        for key, values in arr.items():
            for value in values:
                if value == i:
                    arr2[key]+=1
    answer = list(arr2.values())
    return answer