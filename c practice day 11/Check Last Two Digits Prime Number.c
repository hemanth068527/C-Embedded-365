#include <stdio.h>

void check_first_2digits_prime(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check_first_2digits_prime(num);

    return 0;
}

void check_first_2digits_prime(int num)
{
    int n, i, flag = 1;

    n = num % 100;

    if(n <= 1)
        flag = 0;
    else
    {
        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Prime");
    else
        printf("Not Prime");
}
