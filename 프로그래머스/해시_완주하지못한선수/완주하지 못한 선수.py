def solution(participant, completion):
    answer = ''
    data = dict()
    end_data = dict()
    for name in participant:
        data[name] = 0
        end_data[name] = 0
    for name in participant:  
        data[name] +=1
    for name in completion:
        end_data[name]+=1
    for name in end_data:
        if data[name] - end_data[name] != 0:
            answer = name
    return answer