
# 탐색
from collections import deque

def bfs(x, y):
    q = deque()
    
    q.append((x,y))
    wolf, sheep = 0, 0
    # 첫방문처리
    if map_[x][y] == 'v':
        wolf+=1
    elif map_[x][y] == 'k':
        sheep+=1
    map_[x][y] = '#'
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if nx < 0 or nx >=r or ny < 0 or ny >=c:
                continue
            if map_[nx][ny] == '#':
                continue
            else:
                # 방문처리
                if map_[nx][ny] == 'v':
                    wolf+=1
                elif map_[nx][ny] == 'k':
                    sheep+=1
                map_[nx][ny] = '#'
                q.append((nx,ny))

    return wolf, sheep
# 맵 구현
r, c =  map(int, input().split())
wolf_r, sheep_r, w, s = 0, 0, 0, 0
map_ = []
for i in range(r):
    map_.append(list(input()))
    wolf_r += map_[i].count('v')
    sheep_r += map_[i].count('k')

dx = [-1, 1, 0 ,0]
dy = [0, 0, -1, 1]

for i in range(r):
    for j in range(c):
        if map_[i][j] != '#':
            w,s = bfs(i, j)

            if s > w and w != 0:
                wolf_r -= w
            else:
                if s!=0:
                    sheep_r -= s
print(sheep_r, wolf_r)