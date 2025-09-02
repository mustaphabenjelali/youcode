#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    float Moyenne;
    printf("Entrer Note 1 :");
    scanf("%f",&a);
    printf("Entrer Note 2 :");
    scanf("%f",&b);
    printf("Entrer Note 3:" );
    scanf("%f",&c);

    Moyenne = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf(" La moyenne est  : %.2f \n",Moyenne);

    return 0;
}
