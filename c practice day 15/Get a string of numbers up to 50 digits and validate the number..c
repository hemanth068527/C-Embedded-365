#include <stdio.h>

int main()
{
    char str[51];
    int i = 0, valid = 1;

    printf("Enter a number: ");
    scanf("%50s", str);

    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            valid = 0;
            break;
        }
        i++;
    }

    if(valid)
        printf("Valid Number");
    else
        printf("Invalid Number");
}
