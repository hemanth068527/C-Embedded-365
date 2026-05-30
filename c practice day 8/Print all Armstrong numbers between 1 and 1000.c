#include <stdio.h>

int main()
{
    int num, temp, digit, sum;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    num = 1;
    while (num <= 1000)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }

        num++;
    }
}
