def solution(answers):
    answer = []
    m_score = [0, 0, 0]
    m1 = [1, 2, 3, 4 , 5]
    m2 = [2, 1, 2, 3, 2, 4, 2, 5]
    m3 = [3, 3, 1, 1, 2, 2,4, 4, 5, 5]
    for i in range(len(answers)):
        if m1[i%5] == answers[i]:
            m_score[0] +=1
        if m2[i%8] == answers[i]:
            m_score[1] +=1
            
        if m3[i%10] == answers[i]:
            m_score[2] +=1
    tmp = max(m_score)
    for idx, sc in enumerate(m_score):
        if sc == tmp:
            answer.append(idx + 1)
    return answer