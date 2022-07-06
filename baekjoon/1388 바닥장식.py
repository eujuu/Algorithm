from collections import deque

def bfs(x,y, ch):
    q=deque()
    q.append((x,y))
    if ch == '|':
        dx = [-1,1]
        dy = [0,0]
    elif ch == "-":
        dx = [0,0]
        dy = [-1,1]
    map_[x][y] = '.'
    while q:
        x,y = q.popleft()
        for i in range(2):
            nx = dx[i] + x
            ny = dy[i] + y
            if nx < 0 or nx >= n or ny < 0 or ny >=m:
                continue
            if map_[nx][ny] == ch:
                q.append((nx,ny))
                map_[nx][ny] = '.'
                
        
n , m = map(int, input().split())

map_ = []
answer = 0
for i in range(n):
    map_.append(list(input()))

for i in range(n):
    for j in range(m):
        if map_[i][j] != '.':
            bfs(i,j, map_[i][j])
            answer+=1
print(answer)