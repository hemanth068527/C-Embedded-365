#include <stdio.h>

void intcon(int *src1, int size1,
            int *src2, int size2,
            int *dst)
{
    while(size1--)
    {
        *dst = *src1;
        dst++;
        src1++;
    }

    while(size2--)
    {
        *dst = *src2;
        dst++;
        src2++;
    }
}

int main()
{
    int src1[] = {10, 20, 30};
    int src2[] = {40, 50, 60};

    int dst[6];
    int i;

    intcon(src1, 3, src2, 3, dst);

    for(i = 0; i < 6; i++)
    {
        printf("%d ", dst[i]);
    }

    return 0;
}
