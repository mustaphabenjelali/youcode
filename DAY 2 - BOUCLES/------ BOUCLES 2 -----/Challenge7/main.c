#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int a=0,b=1,sab;
    printf("Entrer un nombre :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d",a);
        sab =a+b;
        a=b;
        b=sab;
    }
    return 0;
}
