#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Entrer le valeur de n :  ");
    scanf("%d",&n);
    printf("les %d Premier Nombre impais sont :\n",n);
    for(i=1;i<=n;i++){
        printf("%d",2*i -1);
    }
    return 0;
}
