#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
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

void ajouterEtudiat() {
    if (nbEtudiants < MAX) {
        printf("ID: ");
        scanf("%d", &etudiants[nbEtudiants].id);
        printf("Nom: ");
        scanf("%s", etudiants[nbEtudiants].nom);
        printf("Prenom: ");
        scanf("%s", etudiants[nbEtudiants].prenom);
        printf("Age: ");
        scanf("%d", &etudiants[nbEtudiants].age);
        printf("Moyenne: ");
        scanf("%f", &etudiants[nbEtudiants].moyenne);

        nbEtudiants++;
        printf(" Etudiant ajoute avec succes \n");
    } else {
        printf(" Liste de etudiants pleine \n");
    }
}

void ajouterCours() {
    if (nbCours < MAX) {
        printf("Code: ");
        scanf("%d", &cours[nbCours].code);
        printf("Nom: ");
        scanf("%s", cours[nbCours].nom);
        printf("Crédits: ");
        scanf("%d", &cours[nbCours].credits);
        printf("Note: ");
        scanf("%f", &cours[nbCours].note);

        nbCours++;
        printf(" Cours ajouté avec succe s\n");
    } else {
        printf(" Liste des cours pleine \n");
    }
}


int main()
{

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
            case 1: ajouterEtudiat(); break;
            case 2: ajouterCours(); break;
            case 3: ; break;
            case 4: ; break;
            case 0: printf("bye\n"); break;
            default: printf(" Choix invalide!\n");
        }
    } while (choix != 0);
    return 0;
}
