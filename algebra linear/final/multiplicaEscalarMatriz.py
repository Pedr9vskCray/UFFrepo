from lerMatriz import ler_matriz

mat1 = ler_matriz('matriz4.txt')

# preparando a matriz final

multi = []

# lendo o escalar

while True:
    try:
        escalar = int(input("Por favor digite o escalar: "))
        break
    except ValueError:
        print("Por favor, digite somente números.")

# fazendo a multiplicacao

for x in range(len(mat1)):
    multi.append([])
    for y in range(len(mat1[x])):
        multi[x].append(mat1[x][y] * escalar)

# printando o resultado

for x in multi:
    print(x)




