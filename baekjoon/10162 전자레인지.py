x = int(input())

time_types = [300, 60, 10]
result = []
for time in time_types:
  result.append(x // time)
  x %= time
  

if(x != 0 ):
  print(-1)
else:
  for i in result:
    print(i, end = " ")

  