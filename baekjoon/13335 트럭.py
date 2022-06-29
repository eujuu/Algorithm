from collections import deque


n , w, l = map(int, input().split())

truck = deque(map(int, input().split()))
on_bridge = deque([0] * w)
time = 0


while truck:
    on_bridge.popleft()
    first = truck[0]
    
    if len(on_bridge) < w and sum(on_bridge) + first <= l:
        on_bridge.append(truck.popleft())
    else:
        on_bridge.append(0)
    time+=1

    
print(time+w)