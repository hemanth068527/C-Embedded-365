#include <stdio.h>

void my_memcpy(int *src, int *dst, int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        dst[i] = src[i];
    }
}

int main()
{
    int src[5] = {10, 20, 30, 40, 50};
    int dst[5];
    int i;

    my_memcpy(src, dst, 5);

    printf("Copied Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", dst[i]);
    }

    return 0;
}
