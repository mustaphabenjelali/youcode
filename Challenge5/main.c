#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T;
    printf("Entrer la temperature en Celsius : ");
    scanf("%f", &T);
    if(T < 0){
        printf("Etat de l'eau : Solide (Glace) \n");
    }
    else if (T>= 0 && T<100){
            printf("Etat de l'eau : Liquide (eau)");
    }
    else {
        printf("Etat de l'eau : Gaz");
    }
    return 0;
}
