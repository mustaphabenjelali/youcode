#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tableaux[50];
    printf("Entrer Votre Nom :");
    fgets(tableaux,50,stdin);
    printf("Votre Nom est : %s",tableaux);
    return 0;
}
