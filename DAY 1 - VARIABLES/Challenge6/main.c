#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b;
    printf("Entrer le premier nombre :");
    scanf("%f",&a);

    printf("Entrer le deuxieme nombre :");
    scanf("%f",&b);

    printf("\n=== Résultats des opérations ===\n");
    printf("Addition (a + b) = %.2f \n",a + b);
    printf("soustraction (a - b) = %.2f \n",a - b);
    printf("Multiplication (a * b) = %.2f \n",a * b);

    if(b !=0){
        printf("division (a / b) = %.2f",a / b);
    } else{
        printf("Division (a / b ) = Erreur ! \n");
    }
    return 0;
}
