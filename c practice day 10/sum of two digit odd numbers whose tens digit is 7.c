#include <stdio.h>

void count_total_digits(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    count_total_digits(num);

    return 0;
}

void count_total_digits(int num)
{
    int count = 0;

    if(num == 0)
    {
        count = 1;
    }
    else
    {
        while(num != 0)
        {
            count++;
            num = num / 10;
        }
    }

    printf("Total digits = %d", count);
}

