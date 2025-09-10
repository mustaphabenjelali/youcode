#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tab1[60]="";
    char tab2[60]="";
    printf("Entrer  premier mot :");
    scanf("%s",tab1);
    printf("Entrer deuxieme mot :");
    scanf("%s",tab2);
    strcat(tab1,tab2);
    printf("Le texte est : %s",tab1);

    return 0;
}
