#include <stdio.h>
#include <stdlib.h>

int Calcule_Total(int a,int b)
{
    return a + b;
}
int main()
{
    int a;
    int b;
    printf("Entrer premier nombre :");
    scanf("%d",&a);

    printf("Entrer deuxieme nombre :");
    scanf("%d",&b);

    int somme =Calcule_Total(a,b);
    printf("Result est : %d",somme);
    return 0;
}
