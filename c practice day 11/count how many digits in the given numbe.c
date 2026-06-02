#include <stdio.h>

void disp_single_digit_square(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    disp_single_digit_square(num);

    return 0;
}

void disp_single_digit_square(int num)
{
    int digit, count = 0;

    while(num != 0)
    {
        digit = num % 10;

        if(digit == 0 || digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Total single-digit perfect square numbers = %d", count);
}
