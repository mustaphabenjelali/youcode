#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b;
    int d;
    printf("Entrer la valeur de a :");
    scanf("%d",&a);
    printf("Entrer la valeur de b :");
    scanf("%d",&b);
    if(a!=b){
        printf("%d + %d = %d",a + b);
    }
    else{
            d = 3 * (a+b);
        printf("%d ", d);
    }
    return 0;
}
