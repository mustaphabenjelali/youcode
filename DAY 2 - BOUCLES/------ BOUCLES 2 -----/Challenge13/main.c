#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,somme=0;
    printf("Entrer un nombre n :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d",n,i,n*i);
        somme += n*i;
        printf("\n");
    }
    printf("Total : %d",somme);

    return 0;
}
