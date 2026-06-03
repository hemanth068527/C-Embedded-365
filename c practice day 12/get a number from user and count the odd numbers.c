#include <stdio.h>

int disp_total_odd_digits(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_total_odd_digits(x);

    printf("%d", y);

    return 0;
}

int disp_total_odd_digits(int y)
{
    int count = 0, digit;

    while(y != 0)
    {
        digit = y % 10;

        if(digit % 2 != 0)
            count++;

        y = y / 10;
    }

    return count;
}
