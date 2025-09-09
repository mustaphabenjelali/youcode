#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j, up;
    int tableau[100];

    printf("Entrer le nombre d'elements : ");
    scanf("%d", &n);



    for (i = 0; i < n; i++) {
        printf("Entrez element %d  :", i+1);
        scanf("%d", &tableau[i]);
    }

    // Tri à bulles
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Echange
                up = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = up;
            }
        }
    }


    printf("Tableau trié en ordre croissant : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
