import pandas as pd
import openpyxl as pxl

# recebendo a matriz do txt

copy = []
final = []

with open('matrizBase.txt') as mb:
    temp = mb.readlines()
    for x in range(len(temp)):
        copy.append(temp[x])

for z in range(len(copy)):
    final.append([])

for y in range(len(copy)):
    for w in copy[y]:
        if (w != ' ') and (w != '\n'):
            final[y].append(w)

print(final)




        
        
    
           
            
