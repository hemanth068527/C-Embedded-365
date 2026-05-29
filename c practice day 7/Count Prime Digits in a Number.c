#include <stdio.h>

int main()
{
    int num, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        num /= 10;
    }
    printf("Count of prime digits = %d", count);
}
