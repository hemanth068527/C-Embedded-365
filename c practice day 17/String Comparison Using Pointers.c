#include <stdio.h>

int strcomp(char *src, char *dst)
{
    while(*src != '\0' && *dst != '\0')
    {
        if(*src != *dst)
        {
            return 0;   // Failure
        }

        src++;
        dst++;
    }

    if(*src == '\0' && *dst == '\0')
        return 1;       // Success

    return 0;           // Length mismatch
}

int main()
{
    char src[100], dst[100];

    printf("Enter first string: ");
    scanf("%s", src);

    printf("Enter second string: ");
    scanf("%s", dst);

    if(strcomp(src, dst))
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
