#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char tab[50];
    printf("Entrer la chaîne principale :");
    fgets(tab,50,stdin);

    char cara;

    printf("Entrer un caracter :");
    scanf("%c",&cara);à

    int n= 0;

    for(int i =0;i<strlen(tab)-1;i++){
        if(tab[i]==cara){
            n++;
        }
    }
    printf("le nombre de caracter %c se trouve dans la chaine %s est :%d ",cara,tab,n);
    return 0;
}
