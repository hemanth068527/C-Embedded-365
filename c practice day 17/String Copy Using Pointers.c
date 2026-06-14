#include <stdio.h>

void my_strcpy(char *src, char *dst)
{
    while(*src != '\0')
    {
        *dst = *src;

        src++;
        dst++;
    }

    *dst = '\0';
}

int main()
{
    char src[100];
    char dst[100];

    printf("Enter a string: ");
    scanf("%s", src);

    my_strcpy(src, dst);

    printf("Copied String: %s\n", dst);

    return 0;
}
