#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void mettre_mini(char *texte)
{
    for(int i = 0;texte[i]!='\0';i++)
    {
        texte[i] = tolower(texte[i]);
    }
}

int main()
{
    char texte[100];
    printf("Entrer un text :");
    fgets(texte,100,stdin);
    mettre_mini(texte);

    printf("%s\n",texte);

    return 0;
}
