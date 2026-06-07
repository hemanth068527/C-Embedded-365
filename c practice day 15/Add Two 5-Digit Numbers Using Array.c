#include <stdio.h>

int main()
{
    int a[5], b[5], c[6];
    int i, sum, carry = 0;

    printf("Enter 5 digits for first number:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 digits for second number:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 4; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry;

        c[i + 1] = sum % 10;
        carry = sum / 10;
    }

    c[0] = carry;

    printf("Result = ");

    for(i = 0; i < 6; i++)
    {
        printf("%d", c[i]);
    }
}
