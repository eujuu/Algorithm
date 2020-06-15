def solution(dirs):
    answer = 0
    
    dx = [ 1, 0, -1, 0]
    dy = [0, 1, 0, -1]
    strs = {"U": 0, "R": 1, "D": 2, "L": 3}
    
    visited = set()
    x, y = 0, 0
    
    for dir in dirs:
        
        i = strs[dir]
        nx, ny = x + dx[i], y + dy[i]
        if(nx < 6 and nx > -6 and ny < 6 and ny > -6):
            if (x, y, nx, ny) not in visited:
                visited.add((x, y, nx, ny))
                visited.add((nx, ny, x, y))
                answer +=1
            x, y = nx, ny            
    return answer