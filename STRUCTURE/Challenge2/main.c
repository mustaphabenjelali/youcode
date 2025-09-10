#include <stdio.h>

#define MAX_NOTES 5

 struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[MAX_NOTES];
};

int main() {
    struct Etudiant e;


    printf("Entrez le nom de l'étudiant : ");
    scanf("%s", e.nom);

    printf("Entrez le prénom de l'étudiant : ");
    scanf("%s", e.prenom);


    printf("Entrez %d notes :\n", MAX_NOTES);
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("Note %d : ", i + 1);
        scanf("%d", &e.notes[i]);
    }


    printf("\nEtudiant : %s %s\n", e.prenom, e.nom);
    printf("Notes : ");
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("%d ", e.notes[i]);
    }
    printf("\n");

    return 0;
}
