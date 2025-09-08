#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int fact = 1;
    printf("Entrerun nombre n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n<0){
            printf("Error");
        }else{
            for(i=1;i<=n;i++){
                fact = fact * i;
            }
            printf("%d = %d",n,fact);
        }
    }
    return 0;
}
