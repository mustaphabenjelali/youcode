#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inverser_chaine(char str[] , int n){
    int i;
    printf("Le tableuax des inverse :");
    for(int i=n-1 ; i>=0 ; i--){
        printf("%c",str[i]);
    }
}

int main()
{
    char str[10]="MUSTAPHA";
    inverser_chaine(str , 10);
    return 0;
}
