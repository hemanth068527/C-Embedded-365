#include <stdio.h>

int disp_single_digit_square(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_single_digit_square(x);

    printf("%d", y);

    return 0;
}

int disp_single_digit_square(int y)
{
    int digit, count = 0;

    while(y != 0)
    {
        digit = y % 10;

        if(digit == 1 || digit == 4 || digit == 9)
            count++;

        y = y / 10;
    }

    return count;
}
