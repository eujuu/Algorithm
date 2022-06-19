strings = input().split('-')
result = 0

strs = sum(map(int, (strings[0].split('+'))))

result += strs

for strs in strings[1:]:
  strs = sum(map(int, (strs.split('+'))))
  result -= strs
print(result)