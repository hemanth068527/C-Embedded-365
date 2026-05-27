#include<stdio.h>

int main()
{
    int i, x, sum, c = 0;

    for(i = 1; i < 100000; i++)
    {
        x = i;
        sum = 0;

        for( ; x > 0; x /= 10)
        {
            sum = sum + (x % 10);
        }

        if(sum == 14)
            c++;
    }

    printf("%d", c);

    return 0;
}
