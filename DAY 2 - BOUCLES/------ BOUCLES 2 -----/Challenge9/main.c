#include <stdlib.h>
#include <stdio.h>

int main() {
    int base, exposant;
    long long resultat = 1;

    printf("Entrer la base : ");
    scanf("%d", &base);

    printf("Entrer l'exposant (positif ou 0) : ");
    scanf("%d", &exposant);

    if (exposant < 0) {
        printf(" Exposant n�gatif non pris en charge.\n");
        return 1;
    }

    int i = 0;
    while (i < exposant) {
        resultat *= base;
        i++;
    }

    printf("\nR�sultat : %d^%d = %lld\n", base, exposant, resultat);

    return 0;
}
