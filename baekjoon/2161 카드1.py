from collections import deque

queue = deque()

n = int(input())

for i in range(1, n+1):
    queue.append(i)

while len(queue)>1:
    print(queue.popleft(), end = ' ')
    tmp =queue.popleft()
    queue.append(tmp)
print(queue.popleft())
