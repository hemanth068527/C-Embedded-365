#include<stdio.h>

int main()
{
    int x, y = 1;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x / y >= 10)
    {
        y *= 10;
    }

    if((x % 10) % 2 != 0)
    {
        x = x - y;
    }

    printf("%d", x);
}
