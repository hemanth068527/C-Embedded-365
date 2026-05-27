#include<stdio.h>

int main()
{
    int x, sum = 0;

    printf("Enter number: ");
    scanf("%d", &x);

    while(x > 0)
    {
        sum = sum + x % 10;
        x /= 10;
    }

    printf("%d", sum);
}


