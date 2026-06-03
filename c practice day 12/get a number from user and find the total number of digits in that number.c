#include <stdio.h>

int count_total_digits(int);

int main()
{
    int x, y;
    printf("enter the number :");
    scanf("%d", &x);

    y = count_total_digits(x);

    printf("%d", y);

    return 0;
}

int count_total_digits(int y)
{
    int count = 0;

    while(y != 0)
    {
        count++ ;
        y/=10;
    }

    return count;
}
