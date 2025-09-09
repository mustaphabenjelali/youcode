#include <stdio.h>
#include <stdlib.h>

int est_Pair(int n)
{
    if(n % 2 ==0){
        printf("n est Pair :");
    }
    else{
        printf("n Est Impair:");
    }
}

int main()
{
    int n;

    printf("Entrer un nombre :");
    scanf("%d",&n);

    est_Pair(n);

    return 0;
}
