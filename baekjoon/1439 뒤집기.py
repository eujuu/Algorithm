arr = input()
arr_clean = [0,0]
before = arr[0]
arr_clean[int(before)]+=1
for i in range(1, len(arr)):
  if(before == arr[i]):
    continue;

  before = arr[i];
  arr_clean[int(before)]+=1

arr_clean.sort()
print(arr_clean[0])

