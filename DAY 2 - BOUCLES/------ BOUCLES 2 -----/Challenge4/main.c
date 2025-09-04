#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reste, inverse = 0;
    printf("Entrer un nombre :");
    scanf("%d",&n);
    for(;n!=0;n = n /10){
        reste = n%10;
        inverse = inverse * 10 + reste;
    }
    printf("Nombre inversé = %d\n", inverse);
    return 0;
}
