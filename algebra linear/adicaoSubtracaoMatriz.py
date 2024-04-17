from lerMatriz import ler_matriz

mat1 = ler_matriz('matriz1.txt')
mat2 = ler_matriz('matriz2.txt')

# preparando as matrizes finais

soma = []
subtrac = []

# verificando se as matrizes pode ser operadas

if len(mat1) != len(mat2) or len(mat1[0]) != len(mat2[0]):
    print('As matrizes possuem ordem diferentes e não podem ser operadas.')

else:

    # fazendo a soma das matrizes

    for x in range(len(mat1)):
        soma.append([])
        for y in range(len(mat1[x])):
            soma[x].append(mat1[x][y] + mat2[x][y])

# fazendo a subtracao das matrizes

    for x in range(len(mat1)):
        subtrac.append([])
        for y in range(len(mat1[x])):
            subtrac[x].append(mat1[x][y] - mat2[x][y])

# printando os resultados

    for x in soma:
        print(x)

    print('\n')

    for x in subtrac:
        print(x)
