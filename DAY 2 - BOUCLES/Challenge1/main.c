#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,i;
    printf("Entrer un Nombre :");
    scanf("%d",&n);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n",n ,i ,n * i);
    }
    return 0;
}
