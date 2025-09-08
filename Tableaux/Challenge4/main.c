#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer le nombre d'elements :");
    scanf("%d",&n);

    int tableaux[100];

    for(int i = 0;i<n;i++){
        printf("Entrer l'elements %d :",i+1);
        scanf("%d",&tableaux[i]);
    }

    int max = tableaux[0];

    //Affichage
    for(int i =1;i<n;i++){
        if(tableaux[i] > max){
            max=tableaux[i];
        }
       }
    printf("La maximum est %d\n",max);
    return 0;
}
