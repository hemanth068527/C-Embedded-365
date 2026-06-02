#include <stdio.h>

void disp_total_2digit_odd(long int);

int main()
{
    long int num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    disp_total_2digit_odd(num);

    return 0;
}

void disp_total_2digit_odd(long int num)
{
    int d1, d2;
    int count = 0;

    while(num >= 10)
    {
        d1 = num % 10;
        d2 = (num / 10) % 10;

        int two_digit = d2 * 10 + d1;

        if(two_digit % 2 != 0)
            count++;

        num = num / 10;
    }

    printf("Total 2-digit odd numbers = %d", count);
}
