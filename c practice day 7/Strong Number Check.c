#include <stdio.h>
int main()
{
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;

        int fact = 1;
        int i = 1;

        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");
}
