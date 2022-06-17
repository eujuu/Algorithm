# -*- coding: utf-8 -*-
"""
Created on Fri Jun 17 21:55:05 2022

@author: dyudy
"""

N = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
now = 0
result = 0

for i in data:
    now  = now + i
    result = result+ now
    
    
print(result) 