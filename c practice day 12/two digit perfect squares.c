#include <stdio.h>

int disp_two_digit_square(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_two_digit_square(x);

    printf("%d", y);

    return 0;
}

int disp_two_digit_square(int y)
{
    int num, count = 0;

    while(y >= 10)
    {
        num = y % 100;

        if(num == 16 || num == 25 || num == 36 ||
           num == 49 || num == 64 || num == 81)
        {
            count++;
        }

        y = y / 10;
    }

    return count;
}
