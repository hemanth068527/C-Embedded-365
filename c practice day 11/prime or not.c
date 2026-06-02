#include <stdio.h>

void check_prime(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check_prime(num);

    return 0;
}

void check_prime(int num)
{
    int i = 2, count = 1;

    if(num <= 1)
    {
        printf("Not Prime");
        return;
    }

    while(i < num)
    {
        if(num % i == 0)
        {
            count = 0;
            break;
        }
        i++;
    }

    if(count == 1)
        printf("Prime");
    else
        printf("Not Prime");
}
