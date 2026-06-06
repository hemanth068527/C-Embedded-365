#include <stdio.h>

int main()
{
    int a[5], b[5];
    int i, j = 0, k, isPrime;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        isPrime = 1;

        if(a[i] <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for(k = 2; k < a[i]; k++)
            {
                if(a[i] % k == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime == 0)
        {
            b[j] = a[i];
            j++;
        }
    }

    printf("New array after removing prime numbers:\n");

    for(i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
