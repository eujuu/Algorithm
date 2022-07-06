from collections import deque

n, m = map(int, input().split())
map_ = [[0 for _ in range(n+1)] for _ in range(n+1)]

for i in range(n-1):
    x, y, a = map(int, input().split())
    map_[x][y] = a
    map_[y][x] = a



for i in range(m):
    score = [0 for _ in range(n+1)]
    q = deque()
    s, e = map(int, input().split())
    q.append(s)
    
    while q:
        now = q.popleft()
        for j in range(1,n+1):
            if map_[now][j] > 0 and score[j] == 0:
                score[j] = score[now] + map_[now][j]
                q.append(j)
    print(score[e])
