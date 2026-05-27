#include<stdio.h>

int main()
{
    int x, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x >= 10; x /= 10)
    {
        if((x % 100) % 2 != 0)
            c++;
    }

    printf("%d", c);

    return 0;
}
