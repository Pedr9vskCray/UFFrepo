import openpyxl


def ler_matriz(arq):  # arq = 'NOME DO ARQUIVO .txt COM A MATRIZ'

    # preparando os parâmetros

    copy = []
    end = []

    # copiando as informações do arquivo para a lista

    with open(arq) as mb:
        temp = mb.readlines()
        for x in range(len(temp)):
            copy.append(temp[x])

    # preparando a matriz final

    for y in range(len(copy)):
        end.append([])

    # polindo as informações dos arquivos e fazendo o type casting

    for w in range(len(copy)):
        for s in copy[w].split():
            if s.lstrip('-').isdigit():
                end[w].append(int(s))

    return end
