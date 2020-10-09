#Python BFS
from collections import deque

def bfs(graph, start, visited):
    queue = deque([start]) #큐 구현을위한 deque 라입르ㅓ리
    visited[start]= True #현재 노드 방문처리
    
    while queue: #큐가 빌때까지
    	v =queue.popleft() #큐에서 하나의 원소를 뽑아 출력하기
        print(v, end=' ')
        for i in graph[v]: # 아직 방문하지 않은 인접요소들을 큐에 삽입
        	if not visited[i]:
            	queue.append(i)
                visited[i] =True
 
graph = [ [], [2, 3, 8], [ 1, 7], [1, 4, 5], [3, 5], [3, 4], [7], [2,6, 8],  [1, 7] ]

visited = [False] * 9
bfs(graph, 1, visited)