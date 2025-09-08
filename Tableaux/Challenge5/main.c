#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer nombre d'elements :");
    scanf("%d",&n);

    int tableaux[100];

    for(int i = 0;i<n;i++){
        printf("Entrer element %d :",i+1);
        scanf("%d",&tableaux[i]);
    }

    int min = tableaux[0];

    //Affichage
    for(int i =1;i<n;i++){
        if(tableaux[i] < min){
             min = tableaux[i];
        }
    }

    printf("Le Minimum est : %d ",min);
    return 0;
}
