#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
    printf("Entrer une Caracters :");
    scanf(" %c",&C);
    switch(C) {
    case'A':
    case'a':
    case'E':
    case'e':
    case'i':
    case'I':
    case'U':
    case'u':
    case'O':
    case'o':
        printf("Volleyen");
        break;
        default:
        printf("no Volleyen");

    }
    return 0;
}
