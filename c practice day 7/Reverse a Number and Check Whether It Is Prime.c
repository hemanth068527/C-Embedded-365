#include <stdio.h>

int main()
{
    int num, temp, rev = 0, digit;
    int i = 1, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Reversed Number = %d\n", rev);

    while (i <= rev)
    {
        if (rev % i == 0)
        {
            count++;
        }
        i++;
    }

    if (count == 2)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}
