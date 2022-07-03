
from collections import deque
def bfs(x,y):
    q = deque()
    q.append((x,y))
    cnt = 0
    while q:
        x,y = q.popleft()
        cnt+=1
        for i in range(4):
            nx = dx[i]+ x
            ny = dy[i] + y
            if nx<0 or ny < 0 or nx >=M or ny >=N:
                continue
            if map_[nx][ny] == 1:
                continue
            else:
                q.append((nx, ny))
                map_[nx][ny] = 1

    return cnt
M, N, K = map(int, input().split())

map_ = [[0 for i in range(N)] for j in range(M)]
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
for i in range(K):
    x,y, a, b= map(int,input().split())
    
    #step 1
    y = abs(y - M)
    b = abs(b - M)
    
    #step2
    
    #step3
    
    for m in range(b, y):
        for n in range(x,a):
            map_[m][n] = 1
total = 0
area = []
for i in range(M):
    for j in range(N):
        if map_[i][j] == 0:
            map_[i][j] = 1
            area.append(bfs(i,j))
            total+=1
area.sort()
print(total)
for i in range(len(area)):
    print(area[i], end= ' ')