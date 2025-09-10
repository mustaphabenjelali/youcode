#include <stdio.h>


int my_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char arr[100];
    printf("please enter a array : ");
    fgets(arr, sizeof(arr),stdin);

    int i = my_strlen(arr);

    printf("the size of your array : %d", i - 1 );

    return 0;
}
