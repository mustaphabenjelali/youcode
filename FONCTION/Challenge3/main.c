#include <stdio.h>
#include <stdlib.h>
int Maxim(int a,int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a;
    int b;

    printf("Entrer nombre a :");
    scanf("%d",&a);

    printf("Entrer nombre b :");
    scanf("%d",&b);

    int max = Maxim(a,b);
    printf("Le maximum entre %d et %d est : %d",a,b,max);
    return 0;
}
