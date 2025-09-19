#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_MOTS 1000
#define MAX_TEXTE 2000
#define MAX_POSITIONS 100

typedef struct {
    char mot[50];
    int occurrences, longueur, nbPositions, positions[MAX_POSITIONS];
} Mot;

Mot dictionnaire[MAX_MOTS];
int nbMots = 0;
char texte[MAX_TEXTE];

void nettoyerMot(char *mot) {
    int j = 0;
    for (int i = 0; mot[i]; i++)
        if (isalpha(mot[i]))
            mot[j++] = tolower(mot[i]);
    mot[j] = '\0';
}

void analyserTexte() {
    printf("Entrez le texte :\n");
    getchar();
    fgets(texte, MAX_TEXTE, stdin);
    nbMots = 0;

    char copie[MAX_TEXTE];
    strcpy(copie, texte);
    char *token = strtok(copie, " \n\t.,;:!?()[]{}\"'");
    int pos = 1;

    while (token) {
        nettoyerMot(token);
        if (strlen(token)) {
            int found = 0;
            for (int i = 0; i < nbMots; i++) {
                if (!strcmp(dictionnaire[i].mot, token)) {
                    dictionnaire[i].occurrences++;
                    dictionnaire[i].positions[dictionnaire[i].nbPositions++] = pos;
                    found = 1;
                    break;
                }
            }
            if (!found && nbMots < MAX_MOTS) {
                strcpy(dictionnaire[nbMots].mot, token);
                dictionnaire[nbMots].occurrences = 1;
                dictionnaire[nbMots].longueur = strlen(token);
                dictionnaire[nbMots].positions[0] = pos;
                dictionnaire[nbMots].nbPositions = 1;
                nbMots++;
            }
        }
        pos++;
        token = strtok(NULL, " \n\t.,;:!?()[]{}\"'");
    }
    printf("Analyse terminée : %d mots uniques trouvés.\n", nbMots);
}

void afficherDictionnaire() {
    printf("\n----- Dictionnaire -----\n");
    for (int i = 0; i < nbMots; i++) {
        printf("%s | Occurrences: %d | Longueur: %d | Position: ",
               dictionnaire[i].mot, dictionnaire[i].occurrences, dictionnaire[i].longueur);
        for (int j = 0; j < dictionnaire[i].nbPositions; j++)
            printf("%d ", dictionnaire[i].positions[j]);
        printf("\n");
    }
}

void rechercherMotExact() {
    char mot[50];
    printf("Mot exact à rechercher : ");
    scanf("%s", mot);
    nettoyerMot(mot);

    for (int i = 0; i < nbMots; i++) {
        if (!strcmp(dictionnaire[i].mot, mot)) {
            printf("%s trouvé (%d fois) aux positions : ", mot, dictionnaire[i].occurrences);
            for (int j = 0; j < dictionnaire[i].nbPositions; j++)
                printf("%d ", dictionnaire[i].positions[j]);
            printf("\n");
            return;
        }
    }
    printf("Mot introuvable.\n");
}

void rechercherMotPartiel() {
    char motif[50];
    printf("Motif à rechercher : ");
    scanf("%s", motif);
    nettoyerMot(motif);
    int trouve = 0;
    for (int i = 0; i < nbMots; i++) {
        if (strstr(dictionnaire[i].mot, motif)) {
            printf("- %s (%d occ.)\n", dictionnaire[i].mot, dictionnaire[i].occurrences);
            trouve = 1;
        }
    }
    if (!trouve) printf("Aucun mot trouvé.\n");
}

void echanger(Mot *a, Mot *b) {
    Mot tmp = *a; *a = *b; *b = tmp;
}

void trier(int mode) {
    for (int i = 0; i < nbMots - 1; i++) {
        for (int j = i + 1; j < nbMots; j++) {
            int cond = 0;
            if (mode == 1) cond = strcmp(dictionnaire[i].mot, dictionnaire[j].mot) > 0;
            else if (mode == 2) cond = dictionnaire[i].occurrences < dictionnaire[j].occurrences;
            else if (mode == 3) cond = dictionnaire[i].longueur > dictionnaire[j].longueur;
            if (cond) echanger(&dictionnaire[i], &dictionnaire[j]);
        }
    }
}

void menuTri() {
    int c;
    printf("\n1. Alphabétique\n");
    printf("2. Fréquence\n");
    printf("3. Longueur\n");
    printf("Choix : ");
    scanf("%d", &c);
    if (c >= 1 && c <= 3) {
        trier(c);
        afficherDictionnaire();
    } else printf("Choix invalide.\n");
}

void statistiquesGlobales() {
    if (nbMots == 0) return;
    int total = 0, somme = 0;
    int plusLong = 0, plusCourt = 0, plusFreq = 0;

    for (int i = 0; i < nbMots; i++) {
        total += dictionnaire[i].occurrences;
        somme += dictionnaire[i].occurrences * dictionnaire[i].longueur;

        if (dictionnaire[i].longueur > dictionnaire[plusLong].longueur)
            plusLong = i;
        if (dictionnaire[i].longueur < dictionnaire[plusCourt].longueur)
            plusCourt = i;
        if (dictionnaire[i].occurrences > dictionnaire[plusFreq].occurrences)
            plusFreq = i;
    }

    printf("\n----- Statistiques -----\n");
    printf("Total mots : %d\n", total);
    printf("Mots uniques : %d\n", nbMots);
    printf("Longueur moyenne : %.2f\n", (double)somme / total);
    printf("Plus long : %s | Plus court : %s | Plus fréquent : %s\n",
           dictionnaire[plusLong].mot, dictionnaire[plusCourt].mot, dictionnaire[plusFreq].mot);
}


int main() {
    int choix;
    do {
        printf("\n----------- Menu -----------\n");
        printf("1. Saisir un texte et analyser\n");
        printf("2. Afficher tous les mots (dictionnaire)\n");
        printf("3. Rechercher un mot exact \n");
        printf("4. Rechercher un mot partiel\n");
        printf("5. Trier les mots \n");
        printf("6. Statistiques globales\n");
        printf("7. Analyses avancees (palindromes, anagrammes, nuage)\n");
        printf("0. Quitter\n");
        printf("----------------------------\n");
        printf("Choix : ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: analyserTexte(); break;
            case 2: afficherDictionnaire(); break;
            case 3: rechercherMotExact(); break;
            case 4: rechercherMotPartiel(); break;
            case 5: menuTri(); break;
            case 6: statistiquesGlobales(); break;
            //case 7: test(); break;
            case 0: printf("Bye !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);
    return 0;
}
