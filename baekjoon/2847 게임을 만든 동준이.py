N = int(input())
score = []
for i in range(N):
  x = int(input())
  score.append(x)
last = score[N-1]
time = 0
for i in range(N-2, -1 , -1):
  if score[i] >= last:
    time+= (score[i] - last +1)
    last = last -1
  else:
    last = score[i]
print(time)