N = int(input())
prices = []
for i in range(N):
  x = int(input())
  prices.append(x)

for price in prices:
  coin_types = [25, 10, 5, 1]
  result = []
  for coin in coin_types:
    result.append(price // coin)
    price %= coin

  for i in result:
    print(i, end = " ")
.