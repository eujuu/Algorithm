from collections import deque

v,e = map(int , input().split()) #노드의 개수, 간선
indegree = [0] * (v+1) #진입차수 초기화

graph = [[] for i in range(v+1)] # 간선정보 초기화

#간선 정보 입력 받기
for _ in range(e):
    a, b = map(int, input().split())
    graph[a].append(b) # a에서 b로 이동
    indegree[b] +=1 # 진입차수 증가

#위상정렬 함수
def topology_sort():
    result = [] #수행 결과
    q = deque() #큐
    #처음 시작할 때는 진입차수가 0인 노드를 큐에 삽입
    for i in range( 1, v+1):
        if indegree[i] == 0:
            q.append(i)
    #큐가 빌때까지 반복
    while q:
        #큐에서 원소 꺼내기
        now = q.popleft()
        result.append(now)
        #해당 원소와 연결된 노드들의 진입차수에서 1 빼기
        for i in graph[now]:
            indegree[i] -=1
            #새롭게 진입차수가 0이 되는 노드를 큐에 삽입
            if indegree[i] == 0:
                q.append(i)
    #위상 정렬 수행 결과 출력
    for i in result:
        print(i, end = ' ')

topology_sort()