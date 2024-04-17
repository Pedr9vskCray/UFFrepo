from lerMatriz import ler_matriz

mat = ler_matriz('matriz5.txt')

n = len(mat)

for j in range(n-1):
    pivo = mat[j][j]
    if pivo == 0:
        for d in range(j+1, n):
            if mat[d][j] != mat[j][j]:
                temp = mat[d]
                mat[d] = mat[j]
                mat[j] = temp
        pivo = mat[j][j]
    for i in range(j+1, n):
        multiplicador = mat[i][j] / pivo
        for w in range(len(mat[i])):
            mat[i][w] = mat[i][w] - multiplicador * mat[j][w]
            # mat[i][w] = int(mat[i][w])

for z in mat:
    print(z)
