N, M, K = map(int, input().split())
  
result = 0
if( K > N+M):
  result = 0
else:
  result = (N+M-K)//3

if result > N//2:
  result = N//2

if result > M:
  result = M

print(result)