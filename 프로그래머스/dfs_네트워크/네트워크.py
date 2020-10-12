answer = 0
def dfs(comp,visited, idx ):
    global answer
    if visited[idx] == True:
        return False
    visited[idx] = True
    for i in comp[idx]:
        if not visited[i]:
            dfs(comp, visited, i)
    return True

def solution(n, computers):
    global answer
    visited = [False] * len(computers)
    graph = []
    
    for i in range(len(computers)):
        graph.append([])
        for j in range(len(computers)):
            if i!=j and computers[i][j] == 1 :
                graph[i].append(j)
    print(graph)
    for i  in range(len(computers)):
        if(dfs(graph, visited, i)):
            print(i)
            answer+=1
        
    return answer