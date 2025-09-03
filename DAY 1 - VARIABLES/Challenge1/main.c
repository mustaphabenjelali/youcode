#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];


    printf("Entrer votre nom : ");
    scanf("%s", nom);

    printf("Entrer votre prenom : ");
    scanf("%s", prenom);

    printf("Entrer votre age : ");
    scanf("%d", &age);

    printf("Entrer votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez votre email : ");
    scanf("%s", email);

    printf("\n----- Informations Personnelles -----\n");
    printf("Nom       : %s\n", nom);
    printf("Prenom    : %s\n", prenom);
    printf("Age       : %d ans\n", age);
    printf("Sexe      : %c\n", sexe);
    printf("Email     : %s\n", email);

    return 0;
}
