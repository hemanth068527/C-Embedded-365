#include <stdio.h>

int check_last_digit_odd(int);

int main()
{
    int x, y;

    printf("enter the number :");
    scanf("%d", &x);

    y = check_last_digit_odd(x);

    printf("%d", y);

    return 0;
}

int check_last_digit_odd(int y)
{
    int first, last;
    int temp = y;
    int power = 1;

    last = y % 10;

    if(last % 2 == 0)
        return y;

    while(temp >= 10)
    {
        temp /= 10;
        power *= 10;
    }

    first = temp - 1;

    return first * power + (y % power);
}
