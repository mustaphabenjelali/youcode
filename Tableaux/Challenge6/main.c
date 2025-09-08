#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fact;

    printf("Entrer nombre d'elements :");
    scanf("%d",&n);

    int tableaux[n],result[n];

    for(int i =0;i<n;i++){
        printf("Entrer elements %d :",i+1);
        scanf("%d",&tableaux[i]);
    }

    printf("Entrer la facteur de multiplication :");
    scanf("%d",&fact);

    for(int i=0;i<n;i++)
    {
        result[i] = tableaux[i] * fact;
    }

    printf("Tableau resultant : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableaux[i] * fact);
    }
    printf("\n");

    return 0;
}
