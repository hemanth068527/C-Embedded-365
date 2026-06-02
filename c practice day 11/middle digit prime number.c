#include <stdio.h>

void middle_2digits_prime(int);

int main()
{
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    middle_2digits_prime(num);

    return 0;
}

void middle_2digits_prime(int num)
{
    int hundred, ten;

    hundred = (num / 100) % 10;
    ten = (num / 10) % 10;

    if ((hundred == 2 || hundred == 3 || hundred == 5 || hundred == 7) &&
        (ten == 2 || ten == 3 || ten == 5 || ten == 7))
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
