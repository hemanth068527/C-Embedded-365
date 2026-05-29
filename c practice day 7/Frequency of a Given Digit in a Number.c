#include <stdio.h>

int main()
{
    int num, digit, temp, rem, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the digit to find: ");
    scanf("%d", &digit);

    temp = num;

    while (temp > 0)
    {
        rem = temp % 10;

        if (rem == digit)
        {
            count++;
        }

        temp /= 10;
    }

    printf("Frequency of %d = %d", digit, count);
}
