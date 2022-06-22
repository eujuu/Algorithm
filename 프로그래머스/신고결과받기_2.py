def solution(id_list, report, k):
    answer = []
    arr = {}
    arr2 = {}
    tmp = []
    tmp2 = []
    for i in id_list:
        arr2[i] = 0
    for i in report:
        tmp.append(i.split(" "))

    for i in range(len(tmp)):
        if tmp[i][1] not in arr:
            tt=[]
            tt.append(tmp[i][0])
            arr[tmp[i][1]] = tt
        else:
            if tmp[i][0] not in arr[tmp[i][1]]:
                arr[tmp[i][1]].append(tmp[i][0])


    for key, value in arr.items():
        if len(value)>=k:
            tmp2.append(key)

    for i in tmp2:
        for key, values in arr.items():
            if key == i:
                for value in values:
                    arr2[value]+=1
    answer = list(arr2.values())

    return answer