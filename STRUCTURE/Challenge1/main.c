#include <stdio.h>
#include <stdlib.h>

struct Personne{
    char Nom[50];
    char Prenom[50];
    int age;
};

int main()
{
    struct Personne employe;
    printf("Entrer le nom de l'employe :");
    scanf("%s",employe.Nom);
    printf("Entrer le Prenom de l'employe :");
    scanf("%s",employe.Prenom);
    printf("Entrer l'age de l'employe :");
    scanf("%d",&employe.age);


    //Affichage
    printf("\n------- Informations de l'employe :--------\n");
    printf("Nom : %s\n",employe.Nom);
    printf("Prenom : %s\n",employe.Prenom);
    printf("Age : %d\n",employe.age);

    return 0;
}
