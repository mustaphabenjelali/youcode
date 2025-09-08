#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,somme =0;
    printf("Entrer nombre d'element : ");
    scanf("%d",&n);
    int tableaux[100];
    for(int i = 0;i<n;i++){
        printf("Entrer l'element %d:",i+1);
        scanf("%d",&tableaux[i]);
        somme+=tableaux[i];
    }
    printf("La somme des elements est : %d \n",somme);

    return 0;
}
