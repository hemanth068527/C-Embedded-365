#include<stdio.h>

int main()
{
    int i = 1, x, sum, count = 0;

    while(i < 100000)
    {
        x = i;
        sum = 0;

        while(x > 0)
        {
            sum = sum + (x % 10);
            x = x / 10;
        }

        if(sum == 14)
            count++;

        i++;
    }

    printf("%d", count);
}
