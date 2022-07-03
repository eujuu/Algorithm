from collections import deque

def bfs(x, y):
    q = deque()
    q.append((x,y))

    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if nx < 0 or ny < 0 or nx>=n or ny >=n:
                continue
            if map_[nx][ny] == map_[x][y] and visited[nx][ny] == 0:
                q.append((nx,ny))
                visited[nx][ny] = 1

    
n = int(input())
map_ = []
visited = [ [0 for i in range(n)] for j in range(n)]
dx = [-1, 1, 0 , 0]
dy = [0,0,-1,1]
cnt = 0
for i in range(n):
    map_.append(list(input()))

ans , ans1 = 0, 0
for i in range(n):
    for j in range(n):
        if visited[i][j] == 0:
            bfs(i, j)
            ans+=1
          
for i in range(n):
    for j in range(n):
        if map_[i][j] == 'G':
            map_[i][j] = 'R'
visited = [ [0 for i in range(n)] for j in range(n)]
for i in range(n):
    for j in range(n):
        if visited[i][j] == 0:
          bfs(i, j)
          ans1+=1
        
print(ans, ans1)