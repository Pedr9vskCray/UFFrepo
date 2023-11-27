#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct loadout
{

    char name[20];
    int lightAmmo;
    int mediumAmmo;
    int heavyAmmo;
};

typedef struct loadout inventory;

int main()
{

    inventory player1;

    strcpy(player1.name, "Pedr9vskCray");
    player1.lightAmmo = 24;
    player1.mediumAmmo = 0;
    player1.heavyAmmo = 300;

    printf("\nPlayer Name: %s\nLight Ammo: %d\nMedium Ammo: %d\nHeavy Ammo: %d\n", player1.name, player1.lightAmmo, player1.mediumAmmo, player1.heavyAmmo);

    return 0;
}
