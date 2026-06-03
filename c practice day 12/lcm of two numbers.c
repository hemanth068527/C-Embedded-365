#include <stdio.h>

int disp_LCM2(int, int);

int main()
{
    int x, y, z;
    printf("enter the numbers :");
    scanf("%d%d", &x, &y);

    z = disp_LCM2(x, y);

    printf("%d", z);

    return 0;
}

int disp_LCM2(int x, int y)
{
    int i;

    for(i = (x > y ? x : y); ; i++)
    {
        if(i % x == 0 && i % y == 0)
            return i;
    }
}
