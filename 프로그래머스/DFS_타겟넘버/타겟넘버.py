answer = 0
def dfs(graph, idx, target, sum):
    global answer
    if idx == len(graph):
        if(sum == target):
            answer+=1
        return True
    dfs(graph, idx+1, target, sum+graph[idx])
    dfs(graph, idx+1, target, sum -graph[idx])
def solution(numbers, target):
    
    dfs(numbers, 0, target, 0)
    
    return answer
