
from collections import deque

def bfs(x, y):    
    q = deque()
    q.append((x,y))
    map_[x][y] = 0
    while q:
        x, y = q.popleft()
        
        for i in range(8):
            nx = dx[i] + x
            ny = dy[i] + y
            if nx < 0 or nx >= a or ny < 0 or ny >=b:
                continue
            if map_[nx][ny] == 1:
                q.append((nx,ny))
                map_[nx][ny] = 0
                
a, b= map(int, input().split())
map_ = []
dx = [-1, 1, 0, 0, -1, 1, -1, 1]
dy = [ 0, 0, -1, 1, 1, -1, -1, 1]
answer = 0
for _ in range(a):
    map_.append(list(map(int, input().split())))
    
for i in range(a):
    for j in range(b):
        if map_[i][j] == 1:
            bfs(i, j)
            answer+=1

print(answer)