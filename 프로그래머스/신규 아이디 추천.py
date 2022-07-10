
def solution(new_id):
    answer = ''
    
    step1 = new_id.lower()
    step2=""
    for i in step1:
        if i.isalnum() or i in '-_.':
            step2+=i

    step3 = ""
    tmp = 0
    while '..' in step2:
        step2 = step2.replace('..', '.')
    step3 = step2

    step4 = ""
    step4 = step3
    if step3[0] == '.' or step3[-1] == '.':
        if step3[0] == '.':
            step4 = step4[1:]
        if step3[-1] == '.':
            step4 = step4[:-1]

    
    step5  =""
    if len(step4) == 0:
        step5 = 'a'
    else:
        step5 = step4 
    step6 = ""
    
    if len(step5)>=16:
        step6 += step5[0:15]
        if(step6[-1] == '.'):
            step6 = step6[:-1]
    else:
         step6 = step5   
            
    if len(step6) <=2:
        tmp = ""
        tmp = step6[-1]
        while len(step6)<3:
            step6+=tmp
    answer = step6
    return answer