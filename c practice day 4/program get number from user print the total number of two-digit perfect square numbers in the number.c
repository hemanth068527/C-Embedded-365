#include<stdio.h>

int main()
{
    int x, y, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x >= 10; x /= 10)
    {
        y = x % 100;

        if(y == 16 || y == 25 || y == 36 || y == 49 ||
           y == 64 || y == 81)
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}
