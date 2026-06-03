#include <stdio.h>

int disp_sum_all_digits(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_sum_all_digits(x);

    printf("%d", y);

    return 0;
}

int disp_sum_all_digits(int y)
{
    int x,sum = 0;

    while(y != 0)
    {
        x=y%10;
        sum = sum + x ;
        y/=10;
    }

    return sum;
}

