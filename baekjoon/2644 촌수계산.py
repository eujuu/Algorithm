from collections import deque


n = int(input())
a, b = map(int, input().split())
m = int(input())

map_ = [[0 for _ in range(n+1)] for _ in range(n+1)]
visited = [0 for _ in range(n+1)]
for i in range(m):
    x, y = map(int, input().split())
    map_[x][y] = 1
    map_[y][x] = 1



q = deque()
q.append(a)
answer = 0
find = 0
while q:
    now = q.popleft()
   
    for i in range(1, n+1):
        if map_[now][i] == 1 and visited[i] == 0:
            visited[i] = visited[now]+1
            q.append(i)
#print(visited)            
answer = visited[b] if visited[b]>0 else -1
print(answer)          