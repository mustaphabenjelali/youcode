#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Etudiant
{
    int id;
    char nom[50];
    char prenom[50];
    int age;
    float moyenne;
};

struct Cours
{
    int code;
    char nom[50];
    int credits;
    float note;
};

struct Etudiant etudiants[MAX];
struct Cours cours[MAX];
int nbEtudiants = 0;
int nbCours = 0;

int ajouterEtud()
{

}



int main()
{
    ajouterEtud();
    int choix;

    do {
        printf("\n ------ MENU -----\n");
        printf("1- Ajoute Etudiant \n");
        printf("2- Ajoute Cours \n");
        printf("3- Affiche Etudiants \n");
        printf("4- Affiche Cours\n");
        printf("0- Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterEtudiant(); break;
            case 2: ajouterCours(); break;
            case 3: afficherEtudiants(); break;
            case 4: afficherCours(); break;
            case 0: printf("bye\n"); break;
            default: printf(" Choix invalide!\n");
        }
    } while (choix != 0);
    return 0;
}
