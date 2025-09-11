#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    float longueur;
    float largeur;
};

float surRectangle(struct Rectangle R)
{
    return R.longueur * R.largeur;
}

int main()
{
    struct Rectangle rect;
    printf("Enrer le longueur :");
    scanf("%f",&rect.longueur);

    printf("Entrer la largeur : ");
    scanf("%f",&rect.largeur);

    printf("L'aire de Rectangle est %.2f",surRectangle(rect));


    return 0;
}
