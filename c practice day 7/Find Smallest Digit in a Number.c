#include <stdio.h>

int main()
{
    int num, digit, smallest;

    printf("Enter a number: ");
    scanf("%d", &num);

    smallest = num % 10;

    while (num > 0)
    {
        digit = num % 10;

        if (digit < smallest)
        {
            smallest = digit;
        }

        num = num / 10;
    }

    printf("smallest digit = %d", smallest);
}

