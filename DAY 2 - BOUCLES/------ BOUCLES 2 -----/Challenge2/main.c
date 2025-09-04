#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Entrer Nombre n :");
    scanf("%d",&n);
    for(i = 1 ;i <=n;i++){
        for(j=1;j<=2 * i -1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
