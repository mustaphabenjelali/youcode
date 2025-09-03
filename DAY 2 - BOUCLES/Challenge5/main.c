#include <stdio.h>

int main() {
    int base, exposant;
    long long resultat = 1;

    printf("Entrer la base : ");
    scanf("%d", &base);

    printf("Entrer l'exposant (positif ou 0) : ");
    scanf("%d", &exposant);

    if (exposant < 0) {
        printf("️ Exposant négatif non pris \n");
        return 1;
    }

    for (int i = 0; i < exposant; i++) {
        resultat *= base;
    }

    printf("\n Résultat : %d^%d = %lld\n", base, exposant, resultat);

    return 0;
}
