n = int(input())
dict ={}
for i in range(n):
    x = int(input())
    if x not in dict.keys():
        dict[x]=1
    else:
        dict[x]+=1
        
sorted_dict = sorted(dict.items(), key = lambda item: item[1], reverse = True)
max = sorted_dict[0][1]
arr = []
for card in sorted_dict:
    if card[1] == max:
        arr.append(card[0])
arr.sort()
print(arr[0])