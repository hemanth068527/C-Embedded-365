#include<stdio.h>

int main()
{
    int x, temp, sum = 0, i = 1, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    temp = x;

    while(temp > 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }

    while(i <= x)
    {
        if(x % i == 0)
            c++;

        i++;
    }

    if(c == 2 && sum == 14)
        printf("Prime & sum of digits is 14");

    else if(c != 2 && sum == 14)
        printf("Not Prime but sum of digits is 14");

    else if(c == 2 && sum != 14)
        printf("Prime & sum of digits is not 14");

    else
        printf("Not Prime & sum of digits is not 14");

}
