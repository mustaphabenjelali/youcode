#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[40];
    float N1,N2,N3,N4,N5;
    float Total, Moyenne;
    printf("Entrer Nom de Eleve :");
    scanf("%s",Nom);
    printf("Entrer Note 1 :");
    scanf("%f",&N1);
    printf("Entrer Note 2 :");
    scanf("%f",&N2);
    printf("Entrer Note 3 :");
    scanf("%f",&N3);
    printf("Entrer Note 4 :");
    scanf("%f",&N4);
    printf("Entrer Note 5 :");
    scanf("%f",&N5);
    Total = N1 + N2 + N3 + N4  + N5;
    Moyenne = Total / 5 ;

    printf("-------- RAPPORT FINAL ---------\n");
    printf("Nom : %s \n",Nom);
    printf("Notes saisies :\n");
    printf("Matiere 1 : %f\n",N1);
    printf("Matiere 2 : %f\n",N2);
    printf("Matiere 3 : %f\n",N3);
    printf("Matiere 4 : %f\n",N4);
    printf("Matiere 5 : %f\n",N5);
    printf("Total des Notes : %f\n",Total);
    printf("Moyenne : %f\n",Moyenne);
    if(Moyenne<=100 && Moyenne>=80){
        printf("Mention Obtenue est F");
    }
    else if(Moyenne <= 80 && Moyenne >= 60){
        printf("Mention Obtenue est : D");
    }
    else if(Moyenne <= 60 && Moyenne >=40){
        printf("Mention Obtenue est : C");
    }
    else if(Moyenne <= 40 && Moyenne >=20)
    {
        printf("Mention Obtenue est : B ");
    }
    else{
        printf("Mention Obtenue est : A");
    }
    if(N1 > max) max =N1;
    if(N2 > max) max =N2;
    if(N3 > max) max =N3;
    if(N4 > max) max = N4;
    if(N5 > max) max =N5;

    printf("Le note %.2f est haute \n ",max);
    if(N1 > min) min =N1;
    if(N2 > min) min =N2;
    if(N3 > min) min =N3;
    if(N4 > min) min =N4;
    if(N5 > min) min =N5;
    printf("Le note %.2f est basse \n ",min);

    return 0;
}
