#include <stdio.h>

int memcomp(int *src, int *dst, int size)
{
    while(size--)
    {
        if(*src != *dst)
        {
            return 0;
        }

        src++;
        dst++;
    }

    return 1;
}

int main()
{
    int src[5] = {10, 20, 30, 40, 50};
    int dst[5] = {10, 20, 30, 40, 50};

    if(memcomp(src, dst, 5))
        printf("Success\n");
    else
        printf("Failure\n");

    return 0;
}
