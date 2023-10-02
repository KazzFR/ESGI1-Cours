#include "TP1.h"
#include <stdio.h>

void TP1_1() {
    printf("TP1_1\n");

    int operation, nombre1, nombre2;

    printf("Choisissez une operation: 1 pour Addition, 2 pour Soustraction, 3 pour Multiplication, 4 pour Division\n");
    scanf("%d", &operation);

    printf("entrez le premier nombre\n");
    scanf("%d", &nombre1);

    printf("entrez le deuxieme nombre\n");
    scanf("%d", &nombre2);

    int x;

    if (operation == 1)
        x = nombre1 + nombre2;

    else if (operation == 2)
        x = nombre1 - nombre2;

    else if (operation == 3)
        x = nombre1 * nombre2;

    else if (operation == 4) {
        if (nombre2 == 0) {
            printf("impossible de diviser par 0\n");
            return;
        } else {
            x = nombre1 / nombre2;
        }
    }

    printf("%d\n", x);
}