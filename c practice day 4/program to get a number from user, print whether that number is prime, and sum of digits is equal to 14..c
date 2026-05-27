#include<stdio.h>

int main()
{
    int x, i, c = 0, sum = 0, y;

    printf("Enter number: ");
    scanf("%d", &x);

    y = x;

    // Sum of digits
    for( ; y > 0; y /= 10)
    {
        sum = sum + (y % 10);
    }

    // Prime check
    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
            c++;
    }

    if(c == 2 && sum == 14)
        printf("Prime & sum of digits is 14");

    else if(c != 2 && sum == 14)
        printf("Not Prime but sum of digits is 14");

    else if(c == 2 && sum != 14)
        printf("Prime & sum of digits is not 14");

    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}
