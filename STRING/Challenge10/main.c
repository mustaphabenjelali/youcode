#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tab1[100];
    char tab2[100];

    printf("Entrer  Nom et Prenom :");
    fgets(tab1,100,stdin);

    printf("Entrer Nom2 et Prenom2 :");
    fgets(tab2,100,stdin);

    if(strstr(tab1,tab2)!=NULL)
    {
        printf("Exist \n");
    }else{
        printf(" Not exist \n");

    }
    return 0;
}
