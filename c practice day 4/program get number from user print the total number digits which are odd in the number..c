#include<stdio.h>

int main()
{
    int x, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x > 0; x /= 10)
    {
        if((x % 10) % 2 != 0)
            c++;
    }

    printf("%d", c);

    return 0;
}
