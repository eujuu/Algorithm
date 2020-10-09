#python dijkstra, developed

import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)

n, m = map(int, input().split()) # 노드 개수, 간선 개수

start = int(input()) #시작 노드

graph = [[] for i in range(n+1)] #각 노드에 연결 되어 있는 노드에 대한 정보를 담는 리스트
distance = [INF] * (n+1)#최단 거리 테이블을 무한으로 초기화

for _ in range(m): #모든 간선 정보 입력
    a, b, c = map(int, input().split())
    graph[a].append((b, c)) #a->b, 비용 c
    
def dijkstra(start):
    q = []
    heapq.heappush(q, (0, start)) #시작 노드로 가기 위한 최단 거리는 0으로 설정하여, 큐에 삽입
    distance[start] = 0
    while q: #큐가 비어있지 않다면
        dist, now = heapq.heappop(q) #가장 최단 거리가 짧은 노드에 대한 정보 꺼내기
        if distance[now] < dist: #현재 노드가 이미 처리된 적 있는 노드라면 무시(방문 테이블을 따로 두지 않음)
            continue
        for i in graph[now]: #현재 노드와 연결된 다른 인접한 노드들 확인
            cost = dist + i[1]
            #현재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우
            if cost < distance[i[0]]:
                distance[i[0]] = cost
                heapq.heappush(q, (cost, i[0]))

dijkstra(start)

for i in range(1, n+1):
    if distance[i] == INF:
        print("infinity")
    else:
        print(distance[i])