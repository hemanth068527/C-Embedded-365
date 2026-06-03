#include <stdio.h>

int disp_total_2digit_odd(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = disp_total_2digit_odd(x);

    printf("%d", y);

    return 0;
}

int disp_total_2digit_odd(int y)
{
    int count = 0, num;

    while(y >= 10)
    {
        num = y % 100;

        if(num % 2 != 0)
            count++;

        y = y / 10;
    }

    return count;
}
