#include<stdio.h>

int main()
{
    int x, y, first, last, middle, p = 1;

    printf("Enter number: ");
    scanf("%d", &x);

    last = x % 10;

    for(y = x; y >= 10; y = y / 10)
    {
        p = p * 10;
    }

    first = x / p;

    middle = (x % p) / 10;

    x = (last * p) + (middle * 10) + first;

    printf("%d", x);
}
