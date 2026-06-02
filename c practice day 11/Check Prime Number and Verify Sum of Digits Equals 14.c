#include <stdio.h>

void check_prime_and_sum14(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check_prime_and_sum14(num);

    return 0;
}

void check_prime_and_sum14(int num)
{
    int i, prime = 1;
    int temp = num, sum = 0;
    if(num <= 1)
    {
        prime = 0;
    }
    else
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    while(temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if(prime && sum == 14)
        printf("Prime & sum of digits is 14");
    else if(!prime && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if(prime && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
}
