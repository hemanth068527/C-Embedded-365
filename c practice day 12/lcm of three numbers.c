#include <stdio.h>

int disp_LCM3(int, int, int);

int main()
{
    int x, y, z, lcm;
    printf("enter the numbers :");
    scanf("%d%d%d", &x, &y, &z);

    lcm = disp_LCM3(x, y, z);

    printf("%d", lcm);

    return 0;
}

int disp_LCM3(int x, int y, int z)
{
    int i, max;

    max = x;

    if(y > max)
        max = y;

    if(z > max)
        max = z;

    for(i = max; ; i++)
    {
        if(i % x == 0 && i % y == 0 && i % z == 0)
            return i;
    }
}
