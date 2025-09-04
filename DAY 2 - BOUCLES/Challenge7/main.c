#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reste, inverse = 0;

    printf("Entrer un nombre : ");
    scanf("%d", &n);

    while (n != 0) {
        reste = n % 10;
        inverse = inverse * 10 + reste;
        n = n / 10;
    }

    printf("Nombre inversé = %d\n", inverse);
    return 0;
}
