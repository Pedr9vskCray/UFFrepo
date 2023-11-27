#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player
{

    char name[20];
    int score;
    float totalDamage;
};

int main()
{

    struct Player player1 = {"Pedro", 200, 1554.7};
    struct Player player2 = {"Thiago", 177, 1337.2}; // definindo os elementos do struct
    struct Player player3;

    strcpy(player3.name, "Lucas");
    player3.score = 65;
    player3.totalDamage = 587.3;

    printf("Nome: %s\nPlacar: %d\nDano Total: %.1f\n\n", player3.name, player3.score, player3.totalDamage);

    printf("Nome: %s\nPlacar: %d\nDano Total: %.1f\n\n", player2.name, player2.score, player2.totalDamage);

    printf("Nome: %s\nPlacar: %d\nDano Total: %.1f\n\n", player1.name, player1.score, player1.totalDamage);

    return 0;
}