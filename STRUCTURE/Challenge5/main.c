#include <stdio.h>
#include <string.h>

struct Livre{
    char titre[50];
    char auteur[50];
    int annee;
};


Livre creer_livre() {
    Livre li;


    printf("Entrer le titre du livre : ");
    fgets(li.titre, sizeof(li.titre), stdin);

    printf("Entrer l'auteur du livre : ");
    fgets(li.auteur, sizeof(li.auteur), stdin);

    printf("Entrer l'annee de publication : ");
    scanf("%d", &li.annee);

    return li;
}

int main() {
    Livre mon_livre = creer_livre();


    printf("Le livre %s a ete ecrit par %s et publié en %d.\n", mon_livre.titre, mon_livre.auteur, mon_livre.annee);

    return 0;
}
