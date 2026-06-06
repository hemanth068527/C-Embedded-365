#include <stdio.h>

int main()
{
    int a[5], b[5];
    int i, num, rev, digit;
    int sum = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        num = a[i];
        rev = 0;

        while(num != 0)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        b[i] = rev;
        sum = sum + b[i];
    }

    printf("New Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nSum = %d", sum);
}
