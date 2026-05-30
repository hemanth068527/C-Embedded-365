#include <stdio.h>

int main()
{
    int num = 2, i, prime;

    while (num <= 100)
    {
        i = 2;
        prime = 1;

        while (i < num)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
            i++;
        }

        if (prime)
        {
            printf("%d ", num);
        }

        num++;
    }
}
