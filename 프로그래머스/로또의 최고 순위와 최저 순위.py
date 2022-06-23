def solution(lottos, win_nums):
    answer = []
    grade = [6, 6, 5, 4, 3, 2 ,1]

    origin,pos = 0, 0
    for i in lottos:
        if i!= 0 and i in win_nums:
            origin +=1
        elif i == 0:
            pos+=1
    if (origin+pos)>=2:
        answer.append(grade[origin+pos])
    else:
        answer.append(6)
    if origin >=2:
        answer.append(grade[origin])
    else:
        answer.append(6)
    
    return answer