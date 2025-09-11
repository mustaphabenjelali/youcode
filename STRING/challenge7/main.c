#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char tableau[120];
    printf("Entrer Votre Nom et Prenom :");
    fgets(tableau,120,stdin);
    for(int i=0;tableau[i]!='\0' ;i++){
        tableau[i]=toupper(tableau[i]);
    }
    printf("le Nom et Prenom en majuscules est %s",tableau);
    return 0;
}
