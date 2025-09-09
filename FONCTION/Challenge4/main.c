#include <stdio.h>
#include <stdlib.h>

int Minimum(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a;
    int b;

    printf("Entrer Premire nombe :");
    scanf("%d",&a);

    printf("Enrer Deuxieme nombre : ");
    scanf("%d",&b);

    int min = Minimum(a,b);
    printf("La Minimum entre %d et %d est : %d",a,b,min);

    return 0;
}
