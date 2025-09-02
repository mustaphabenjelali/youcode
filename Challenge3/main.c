#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km , Yards;
    printf("Entrer  la distance en Km: ");
    scanf("%f", &km);
    Yards = km * 1093.61;
    printf("La distance en Yards est : %.2f \n", Yards);
    return 0;
}
