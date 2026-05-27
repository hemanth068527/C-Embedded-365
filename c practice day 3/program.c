#include<stdio.h>

int main()
{
    int x, y = 1;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x / y >= 10; )
    {
        y = y * 10;
    }

    for( ; (x / y) % 2 != 0; )
    {
        x = x - y;
    }

    printf("%d", x);
}
