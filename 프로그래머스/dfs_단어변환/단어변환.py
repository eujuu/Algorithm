answer = 0
def check_1diff(a, b):
    cnt = 0
    for i in range(len(a)):
        if a[i] !=b[i]:
            cnt+=1
    if(cnt == 1):
        return True
    else:
        return False
def dfs(graph, idx, tar):
    global answer
    now = graph[idx]
    if(check_1diff(now, tar)):
        answer+=1
        return
    
    for i in range(idx+1, len(graph)):
        if(check_1diff(now, graph[i])):
            answer+=1
            dfs(graph, i, tar)
            return
def solution(begin, target, words):
    words.insert(0, begin)
    dfs(words, 0, target)
    if target not in words:
        return 0
    return answer