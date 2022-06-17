# -*- coding: utf-8 -*-
"""
Created on Fri Jun 17 21:54:41 2022

@author: dyudy
"""

N = int(input())
data1 = list(map(int, input().split()))
data2 = list(map(int, input().split()))

data1.sort(reverse=True)
data2.sort()

result = 0
for i in range(N):
    result += (data1[i] * data2[i])
    
print(result)