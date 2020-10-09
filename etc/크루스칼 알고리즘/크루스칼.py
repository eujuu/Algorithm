def find_parent(parent, x): #특정 원소가 속한 집합 찾기
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]
    
def union_parent(parent, a, b): #두 원소가 속한 집합 찾기
    a = find_parent(a)
    b = find_parent(b)
    if a< b:
        parent[b] = a
    else:
        parent[a] = b
        
 v, e = map(int, input().split())
 parent = [0] * (v+1)
 
 edges = []
 result  = 0
 
 for i in range ( 1, v+1):
     parent[i] = i
     
 for _ in range(e):
     a, b, cost = map(int, input().split())
     edges.append((cost, a, b)) #비용순 정렬을 위해 첫 번째 원소를 비용으로 설정

edges.sort()

for edge in edges: #간선을 하나씩 확인
    cost , a, b = edge
    
    if find_parent(parent, a) != find_parent(parent, b): #사이클이 발생하지 않는 경우에만 집합 포함
        union_parent(parent, a, b)
        result+=cost
        
print(result) #간선 비용의 합