#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char tableau[120];
    printf("Entrer Nom et prenom majuscules : ");
    fgets(tableau,120,stdin);
    for(int i=0;tableau[i]!='\0';i++){
        tableau[i] = tolower(tableau[i]);
    }
    printf("le Nom et prenom en minuscules : %s",tableau);
    return 0;
}
