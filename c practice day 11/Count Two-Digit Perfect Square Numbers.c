#include <stdio.h>

void disp_two_digit_square(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    disp_two_digit_square(num);

    return 0;
}

void disp_two_digit_square(int num)
{
    int pair, count = 1;

    while(num >= 10)
    {
        pair = num % 100;

        if(pair == 16 || pair == 25 || pair == 36 ||
           pair == 49 || pair == 64 || pair == 81)
        {
            count++;
        }

        num = num / 100;
    }

    printf("%d", count);
}
