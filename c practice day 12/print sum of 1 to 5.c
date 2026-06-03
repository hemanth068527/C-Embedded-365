#include <stdio.h>

int disp_sum(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_sum(x);

    printf("%d", y);

    return 0;
}

int disp_sum(int x)
{
    int y = 1, sum = 0;

    while(y <= x)
    {
        sum = sum + y;
        y++;
    }

    return sum;
}
