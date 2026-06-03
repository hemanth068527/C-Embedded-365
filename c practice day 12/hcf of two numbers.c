#include <stdio.h>

int disp_count_HCF2(int, int);

int main()
{
    int x, y, hcf;
    printf("enter the numbers :");
    scanf("%d%d", &x, &y);

    hcf = disp_count_HCF2(x, y);

    printf("%d", hcf);

    return 0;
}

int disp_count_HCF2(int x, int y)
{
    int i, min;

    min = (x < y) ? x : y;

    for(i = min; i >= 1; i--)
    {
        if(x % i == 0 && y % i == 0)
            return i;
    }
}
