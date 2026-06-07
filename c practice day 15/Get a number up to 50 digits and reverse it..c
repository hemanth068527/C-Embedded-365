#include <stdio.h>

int main()
{
    char str[51];
    int len = 0, i;

    printf("Enter a number: ");
    scanf("%50s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
