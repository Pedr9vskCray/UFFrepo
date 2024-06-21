import pandas as pd
import openpyxl as pxl

copy = []
end = []

with open('matrizBase.txt') as mb:
    temp = mb.readlines()
    for x in range(len(temp)):
        copy.append(temp[x])


for y in range(len(copy)):
    end.append([])

for w in range(len(copy)):
    for s in copy[w].split():
        if s.isdigit():
            end[w].append(int(s))
        
print(end)


