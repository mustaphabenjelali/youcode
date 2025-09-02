#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, K;
    printf("Entrer la temperature en Celsius :");
    scanf("%f",C);
    K = C + 273.15;
    printf("La temparature en Kalvin est : %0.2f",K);
    return 0;
}
