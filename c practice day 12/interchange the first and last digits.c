#include <stdio.h>

int disp_interchange_first_last_digit(int);

int main()
{
    int x, y;

    printf("enter the number :");
    scanf("%d", &x);

    y = disp_interchange_first_last_digit(x);

    printf("%d", y);

    return 0;
}

int disp_interchange_first_last_digit(int y)
{
    int first, last, middle;
    int temp = y;
    int power = 1;

    last = y % 10;

    while(temp >= 10)
    {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    middle = (y % power) / 10;

    return last * power + middle * 10 + first;
}
