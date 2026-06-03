#include <stdio.h>

int disp_single_digit_prime(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_single_digit_prime(x);

    printf("%d", y);

    return 0;
}

int disp_single_digit_prime(int y)
{
    int digit, count = 0;

    while(y != 0)
    {
        digit = y % 10;

        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;

        y = y / 10;
    }

    return count;
}
