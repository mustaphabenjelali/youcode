#include <stdio.h>
#include <stdlib.h>

long long fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int a=0,b=1,c;
    for(int i =2;i<=n;i++)
    {
        c = a + b;
        a=b;
        b=c;
    }
    return c;
}

int main()
{
    int n;
    printf("Entrer un Valeur de n :");
    scanf("%d",&n);
    printf("Le Resultat est %lld",fibonacci(n));
    return 0;
}
