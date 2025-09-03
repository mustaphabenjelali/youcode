#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int fact =1;
    printf("Entrer un Nombre :");
    scanf("%d",&n);
    if(n < 0){
        printf("Ereur");
    }
    else{
        for(i=1; i<=n; i++){
            fact = fact * i;
        }
        printf("%d = %d",n,fact);
    }
    return 0;
}
