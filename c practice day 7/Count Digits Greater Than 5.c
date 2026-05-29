#include <stdio.h>

int main()
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit > 5)
        {
            count++;
        }

        num = num / 10;
    }

    printf("Count of digits greater than 5 = %d", count);
}
