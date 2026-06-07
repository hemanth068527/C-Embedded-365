#include <stdio.h>

int main()
{
    int num, temp, rev = 0, digit;
    printf("enter the number :");
    scanf("%d", &num);

    temp = num;

    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    while(rev > 0)
    {
        digit = rev % 10;

        printf("%c\n", digit + '0');

        rev /= 10;
    }
}
