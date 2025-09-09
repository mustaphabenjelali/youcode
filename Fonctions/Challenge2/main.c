#include <stdio.h>
#include <stdlib.h>

int Calcule_multiplication(int a,int b)
{
    return a * b;
}
int main()
{
    int a;
    int b;
    printf("Entrer Premier nombre :");
    scanf("%d",&a);

    printf("Entrer deuxieme nombre :");
    scanf("%d",&b);

    int p =Calcule_multiplication(a,b);
    printf("La produit a * b est :%d",p);

    return 0;
}
