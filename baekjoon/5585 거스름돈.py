x = int(input())

c_money = 1000 - x
coin_types = [500, 100, 50, 10, 5, 1]
result = 0
for coin in coin_types:
  result += (c_money // coin)
  c_money %= coin
print(result)

  