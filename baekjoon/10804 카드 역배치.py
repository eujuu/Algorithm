arr = []
for i in range(21):
  arr.append(i)
for i in range(10):
  a, b = map(int, input().split())
  tmp = arr[a:b+1]
  tmp.reverse()
  n = 0
  for j in range(a, b+1):
    arr[j] = tmp[n]
    n+=1

for i in range(1, 21):
  print(arr[i], end = ' ')
