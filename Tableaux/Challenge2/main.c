#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int tableaux[100];
    printf("Entrer nombre d'elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Entrer elements %d :",i+1);
        scanf("%d",&tableaux[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\n",tableaux[i]);
    }
}
