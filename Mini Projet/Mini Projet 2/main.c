#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[] = "hello";
    int Motf = (tab);


    char tab[Motf];
    for (int i = 0; i < Motf; i++) {
        tab[i] = '_';
    }
    return 0;
}
