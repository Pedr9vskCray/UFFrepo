#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef float nota;
typedef char nome;

struct notaFinal
{

    nome nome[20];
    nota prova1;
    nota prova2;
    nota media;
};

int main()
{

    struct notaFinal aluno1;

    strcpy(aluno1.nome, "Pedro");
    aluno1.prova1 = 7.7;
    aluno1.prova2 = 6.9;
    aluno1.media = (aluno1.prova1 + aluno1.prova2) / 2;

    printf("\nNome do Aluno: %s\nNota da P1: %.1f\nNota da P2: %.1f\nMedia Geral: %.2f\n", aluno1.nome, aluno1.prova1, aluno1.prova2, aluno1.media);

    if (aluno1.media >= 7)
    {

        printf("\n%s você está aprovado!", aluno1.nome);
    }

    else
    {
        printf("\n%s você não foi aprovado.", aluno1.nome);
    }

    return 0;
}