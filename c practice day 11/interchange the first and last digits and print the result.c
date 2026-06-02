#include <stdio.h>

void disp_interchange_first_last_digit(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    disp_interchange_first_last_digit(num);

    return 0;
}

void disp_interchange_first_last_digit(int num)
{
    int first, last, middle, temp, digits = 1;
    int power = 1;
    int result;

    last = num % 10;

    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for(int i = 1; i < digits; i++)
    {
        power *= 10;
    }

    middle = (num % power) / 10;
    result = last * power + middle * 10 + first;
    printf("Result = %d", result);
}
