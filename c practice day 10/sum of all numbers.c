#include <stdio.h>

void disp_sum_all_digits(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    disp_sum_all_digits(num);

    return 0;
}

void disp_sum_all_digits(int num)
{
    int sum = 0,digit;
    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Total sum = %d", sum);
}
