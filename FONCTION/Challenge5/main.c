#include <stdio.h>
#include <stdlib.h>

long long fact(int n)
{
    if(n==0)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Entrer nombre entre Possitif :");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error :");
    } else
    {
        long long result = fact(n);
        printf("La factorielle  de %d est %lld",n,result);
    }
    return 0;
}
