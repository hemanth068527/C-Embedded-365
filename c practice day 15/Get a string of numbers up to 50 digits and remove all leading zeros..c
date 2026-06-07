#include <stdio.h>

int main()
{
    char str[51];
    int i = 0;

    printf("Enter a number: ");
    scanf("%50s", str);

    while(str[i] == '0')
    {
        i++;
    }

    if(str[i] == '\0')
    {
        printf("0");
    }
    else
    {
        while(str[i] != '\0')
        {
            printf("%c", str[i]);
            i++;
        }
    }
}
