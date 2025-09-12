#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

struct Livre creelivre(const char *titre,const char *auteur,int annee){
    struct Livre li;

    strcpy(li.titre,titre);
    strcpy(li.auteur,auteur);
    li.annee = annee;
    return li;
};

int main() {

    struct Livre livreli=creelivre("Nodor ino","rachid nadori",2025);

    printf("Titre est : %s\n",livreli.titre);
    printf("Auteur est : %s\n",livreli.auteur);
    printf("annee de production : %d\n",livreli.annee);

    return 0;
}

