from lerMatriz import ler_matriz

mat = ler_matriz('matriz5.txt')

n = len(mat)

for p in range(n-1):
    pivo = mat[p][p]
    if pivo == 0:
        for d in range(p+1, n):
            if mat[d][p] > mat[p][p]:
                temp = mat[d]
                mat[d] = mat[p]
                mat[p] = temp


for x in mat:
    print(x)
