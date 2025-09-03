#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("Entrer un Nombre :");
    scanf("%d",&nombre);
    if(nombre %2 == 0){
        printf("Le Nombre est Pair ");
    } else{
        printf("Le Nombre est Impair");

    }
    return 0;
}
