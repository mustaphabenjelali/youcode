#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tab[50];
    printf("Entrer un mot :");
    fgets(tab,50,stdin);
    int F =strlen(tab);
    for(int i =F-1;i>=0;i--){
        printf("%c",tab[i]);
    }
    return 0;
}
