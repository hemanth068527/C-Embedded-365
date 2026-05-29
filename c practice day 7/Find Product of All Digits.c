#include <stdio.h>

int main()
{
    int num, digit, product=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit < 10)
        {
            product *= digit;
        }

        num = num / 10;
    }

    printf("product of all digits = %d", product);
}
