def solution(board, moves):
    answer = 0
    tmp = -1
    stack= []
    for i in moves:
        i = i-1
        tmp = -1
        for j in range(len(board)):
            if board[j][i]!=0:
                tmp = board[j][i]
                board[j][i] = 0
                if(len(stack)!=0 and tmp == stack[-1]):
            
                    answer +=2
                    stack.pop()
                else:
                    stack.append(tmp)
                break
        
        #print(stack)
         
    return answer