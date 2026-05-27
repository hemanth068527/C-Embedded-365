#include<stdio.h>

int main()
{
    int x, d, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x > 0; x /= 10)
    {
        d = x % 10;

        if(d == 1 || d == 4 || d == 9)
            c++;
    }

    printf("%d", c);

    return 0;
}
