#include <stdio.h>

int disp_2digit_ones5(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_2digit_ones5(x);

    printf("%d", y);

    return 0;
}

int disp_2digit_ones5(int x)
{
    int y = 11, sum = 0;

    while(y <= x)
    {
        if((y%10)==5)
        sum = sum + y;
        y++;
    }

    return sum;
}

