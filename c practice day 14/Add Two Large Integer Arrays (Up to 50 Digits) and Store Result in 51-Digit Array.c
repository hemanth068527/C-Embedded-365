#include <stdio.h>

int main()
{
    int a[50], b[50], c[51];
    int i, sum, carry = 0;

    printf("Enter 50 digits for first number:\n");
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 50 digits for second number:\n");
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 49; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry;

        c[i + 1] = sum % 10;
        carry = sum / 10;
    }

    c[0] = carry;

    printf("Result:\n");

    for(i = 0; i < 51; i++)
    {
        printf("%d", c[i]);
    }
}
