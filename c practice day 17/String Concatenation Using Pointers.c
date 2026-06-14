#include <stdio.h>

void strcon(char *src1, char *src2, char *dst)
{
    while(*src1 != '\0')
    {
        *dst = *src1;
        src1++;
        dst++;
    }

    while(*src2 != '\0')
    {
        *dst = *src2;
        src2++;
        dst++;
    }

    *dst = '\0';
}

int main()
{
    char src1[50] = "Hello";
    char src2[50] = "World";
    char dst[100];

    strcon(src1, src2, dst);

    printf("%s\n", dst);

    return 0;
}
