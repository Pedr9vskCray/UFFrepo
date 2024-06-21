from lerMatriz import ler_matriz

mat3 = ler_matriz('matriz4.txt')  # TEM QUE SER A MATRIZ LINHA
mat4 = ler_matriz('matriz3.txt')  # TEM QUE SER A MATRIZ COLUNA

# verificar a possibilidade de multiplicacao

if len(mat4[0]) != len(mat3):
    print("As dimensões das matrizes não são compatíveis para multiplicação.")

# efetuando a multiplicacao

else:
    multiplic = []

    for x in range(len(mat3)):
        linha = []
        for y in range(len(mat4[0])):
            soma = 0
            for w in range(len(mat4)):
                soma += mat3[x][w] * mat4[w][y]
            linha.append(soma)
        multiplic.append(linha)

# printando os resultados
    
    for x in multiplic:
        print(x)



