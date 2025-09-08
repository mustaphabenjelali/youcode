#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[] = "hello";
    int taille = (tab);


    char tab[taille];
    for (int i = 0; i < taille; i++) {
        tab[i] = '_';
    }
    return 0;
}
