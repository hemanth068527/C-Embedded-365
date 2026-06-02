#include <stdio.h>

void check_last_digit_odd(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check_last_digit_odd(num);

    return 0;
}

void check_last_digit_odd(int num)
{
    int last_digit = num % 10;

    if(last_digit % 2 == 0)
    {
        printf("%d", num);
    }
    else
    {
        int temp = num;
        int place = 1;

        while(temp >= 10)
        {
            temp = temp / 10;
            place = place * 10;
        }

        num = num - place;

        printf("%d", num);
    }
}
