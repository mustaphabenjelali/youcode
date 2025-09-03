#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh, ms;
    printf("Entrer la vitesse en Km/h : ");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("La vitesse en m/s est %.2f \n",ms);
    return 0;
}
