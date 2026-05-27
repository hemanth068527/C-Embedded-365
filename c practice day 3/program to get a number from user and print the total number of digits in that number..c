#include<stdio.h>

int main()
{
    int x, c = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    for( ; x > 0; x = x / 10)
    {
        c++;
    }

    printf("%d", c);
}
